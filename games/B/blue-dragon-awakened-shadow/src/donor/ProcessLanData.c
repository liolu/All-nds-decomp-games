/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ProcessLanData from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_serverlist.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int time_t;
typedef struct SOInAddr {
    int addr;
} SOInAddr;
struct SOSockAddrIn {
    u8 _pad;
    u8 family;
    u16 port;
    SOInAddr addr;
};
typedef struct SOSockAddr {
    int len;
} SOSockAddr;
typedef unsigned char gsi_u8;
typedef unsigned short gsi_u16;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef int SOCKET;
typedef struct SOSockAddr SOCKADDR;
extern int closesocket(SOCKET sock);
extern int recvfrom(SOCKET sock, char *buf, int len, int flags, SOCKADDR *addr, int *fromlen);
extern int CanReceiveOnSocket(SOCKET sock);
extern gsi_time current_time();
typedef struct _SBServer *SBServer;
typedef enum {
    SBFalse,
    SBTrue
} SBBool;
typedef enum {
    sbe_noerror,
    sbe_socketerror,
    sbe_dnserror,
    sbe_connecterror,
    sbe_dataerror,
    sbe_allocerror,
    sbe_paramerror,
    sbe_duplicateupdateerror
} SBError;
typedef enum {
    sbcm_int,
    sbcm_float,
    sbcm_strcase,
    sbcm_stricase
} SBCompareMode;
typedef struct DArrayImplementation *DArray;
typedef struct HashImplementation *HashTable;
typedef struct _GOACryptState {
    unsigned char cards[256];
    unsigned char rotor;
    unsigned char ratchet;
    unsigned char avalanche;
    unsigned char last_plain;
    unsigned char last_cipher;
} GOACryptState;
typedef enum {
    pi_cryptheader,
    pi_fixedheader,
    pi_keylist,
    pi_uniquevaluelist,
    pi_servers,
    pi_finished
} SBListParseState;
typedef enum {
    sl_lanbrowse,
    sl_disconnected,
    sl_connected,
    sl_mainlist
} SBServerListState;
typedef struct _SBServerList *SBServerListPtr;
typedef enum {
    slc_serveradded,
    slc_serverupdated,
    slc_serverdeleted,
    slc_initiallistcomplete,
    slc_disconnected,
    slc_queryerror,
    slc_publicipdetermined,
    slc_serverchallengereceived
} SBListCallbackReason;
typedef void (*SBListCallBackFn)(SBServerListPtr serverlist, SBListCallbackReason reason, SBServer server, void *instance);
typedef void (*SBMaploopCallbackFn)(SBServerListPtr serverlist, SBServer server, time_t mapChangeTime, int numMaps,
                                    char *mapList[], void *instance);
typedef void (*SBPlayerSearchCallbackFn)(SBServerListPtr serverlist, char *nick, goa_uint32 serverIP,
                                         unsigned short serverPort, time_t lastSeenTime, char *gamename, void *instance);
typedef struct _SBServerList SBServerList;
typedef struct _SortInfo {
    char sortkey[255];
    SBCompareMode comparemode;
} SortInfo;
struct _SBServerList {
    SBServerListState state;
    DArray servers;
    DArray keylist;
    char queryforgamename[36];
    char queryfromgamename[36];
    char queryfromkey[32];
    char mychallenge[8];
    char *inbuffer;
    int inbufferlen;
    const char *popularvalues[255];
    int numpopularvalues;
    int expectedelements;

    SBListCallBackFn ListCallback;
    SBMaploopCallbackFn MaploopCallback;
    SBPlayerSearchCallbackFn PlayerSearchCallback;
    void *instance;

    SortInfo currsortinfo;
    SortInfo prevsortinfo;

    SBBool sortascending;
    goa_uint32 mypublicip;
    goa_uint32 srcip;
    unsigned short defaultport;

    char *lasterror;

    SOCKET slsocket;
    gsi_time lanstarttime;
    int fromgamever;
    GOACryptState cryptkey;
    int queryoptions;
    SBListParseState pstate;
    gsi_u16 backendgameflags;

    const char *mLanAdapterOverride;

    SBServer deadlist;
};
struct _SBServer {
    goa_uint32 publicip;
    unsigned short publicport;
    goa_uint32 privateip;
    unsigned short privateport;
    goa_uint32 icmpip;
    unsigned char state;
    unsigned char flags;
    HashTable keyvals;
    gsi_time updatetime;
    gsi_u32 querychallenge;
    struct _SBServer *next;
    gsi_u8 splitResponseBitmap;
};
extern int SBServerListFindServerByIP(SBServerList *slist, goa_uint32 ip, unsigned short port);
extern void SBServerListAppendServer(SBServerList *slist, SBServer server);
extern SBServer SBAllocServer(SBServerList *slist, goa_uint32 publicip, unsigned short publicport);
extern void SBServerSetFlags(SBServer server, unsigned char flags);
extern int SBIsNullServer(SBServer server);
extern SBServer SBNullServer;
void SBServerListAppendServer(SBServerList *slist, SBServer server);
int SBServerListFindServerByIP(SBServerList *slist, goa_uint32 ip, unsigned short port);
SBError ProcessLanData(SBServerList *slist) {
    char indata[1500];
    struct SOSockAddrIn saddr;
    int saddrlen = sizeof(saddr);
    int error;
    int foundexisting;
    SBServer server;

    while (CanReceiveOnSocket(slist->slsocket)) {

        error = (int) recvfrom(slist->slsocket, indata, sizeof(indata) - 1, 0, (struct SOSockAddr *) &saddr, &saddrlen);

        if (((error) == -1)) {
            continue;
        }

        foundexisting = SBServerListFindServerByIP(slist, saddr.addr.addr, saddr.port);
        if (foundexisting != -1) {
            continue;
        }
        server = SBAllocServer(slist, saddr.addr.addr, saddr.port);
        if (SBIsNullServer(server)) {
            return sbe_allocerror;
        }
        SBServerSetFlags(server, 1 | 16);
        SBServerListAppendServer(slist, server);
    }
    if (current_time() - slist->lanstarttime > 2000) {
        closesocket(slist->slsocket);
        slist->slsocket = (-1);
        slist->state    = sl_disconnected;
        slist->ListCallback(slist, slc_initiallistcomplete, SBNullServer, slist->instance);
    }
    return sbe_noerror;
}
