/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a98a4 from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_serverlist.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef int time_t;
typedef unsigned char gsi_u8;
typedef unsigned short gsi_u16;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef int SOCKET;
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
extern int func_020a7cb0(SBServerList *slist, goa_uint32 ip, unsigned short port);
extern void func_020a7c20(SBServerList *slist, SBServer server);
extern SBServer func_020a7db0(SBServerList *slist, int i);
extern SBServer func_020a6ef8(SBServerList *slist, goa_uint32 publicip, unsigned short publicport);
extern int func_020a6fd0(SBServer server);
void func_020a7c20(SBServerList *slist, SBServer server);
int func_020a7cb0(SBServerList *slist, goa_uint32 ip, unsigned short port);
SBServer func_020a7db0(SBServerList *slist, int i);
void func_020a8b50(SBServerList *slist, char *buf, int len, goa_uint32 *ip, unsigned short *port);
int func_020a8bc0(SBServerList *slist, SBServer server, char *buf, int len, int usepopularlist);
SBError func_020a98a4(SBServerList *slist, char *buf, int len) {

    SBServer server;
    goa_uint32 ip;
    unsigned short port;
    int foundexisting;
    int i;

    if (len < 5) {
        return sbe_dataerror;
    }

    func_020a8b50(slist, buf, len, &ip, &port);

    foundexisting = func_020a7cb0(slist, ip, port);
    if (foundexisting == -1) {
        server = func_020a6ef8(slist, ip, port);
        if (func_020a6fd0(server)) {
            return sbe_allocerror;
        }
    } else {
        server = func_020a7db0(slist, foundexisting);
    }
    i = func_020a8bc0(slist, server, buf, len, 0);
    if (i < 0) {
        return sbe_dataerror;
    }
    if (foundexisting == -1) {
        func_020a7c20(slist, server);
    }
    slist->ListCallback(slist, slc_serverupdated, server, slist->instance);
    return sbe_noerror;
}
