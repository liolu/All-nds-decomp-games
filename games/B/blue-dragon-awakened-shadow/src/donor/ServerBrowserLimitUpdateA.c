/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ServerBrowserLimitUpdateA from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_serverbrowsing.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
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
typedef unsigned char gsi_u8;
typedef unsigned short gsi_u16;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef int SOCKET;
typedef struct DArrayImplementation *DArray;
typedef struct HashImplementation *HashTable;
typedef struct _ServerBrowser *ServerBrowser;
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
    sbc_serveradded,
    sbc_serverupdated,
    sbc_serverupdatefailed,
    sbc_serverdeleted,
    sbc_updatecomplete,
    sbc_queryerror,
    sbc_serverchallengereceived
} SBCallbackReason;
typedef enum {
    sbcs_succeeded,
    sbcs_failed
} SBConnectToServerState;
typedef void (*ServerBrowserCallback)(ServerBrowser sb, SBCallbackReason reason, SBServer server, void *instance);
typedef void (*SBConnectToServerCallback)(ServerBrowser sb, SBConnectToServerState state, SOCKET gamesocket,
                                          struct SOSockAddrIn *remoteaddr, void *instance);
extern SBError ServerBrowserLimitUpdateA(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete,
                                         const unsigned char *basicFields, int numBasicFields, const char *serverFilter,
                                         int maxServers);
typedef enum {
    sbcm_int,
    sbcm_float,
    sbcm_strcase,
    sbcm_stricase
} SBCompareMode;
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
typedef struct _SBQueryEngine *SBQueryEnginePtr;
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
typedef enum {
    qe_updatesuccess,
    qe_updatefailed,
    qe_engineidle,
    qe_challengereceived
} SBQueryEngineCallbackReason;
typedef void (*SBListCallBackFn)(SBServerListPtr serverlist, SBListCallbackReason reason, SBServer server, void *instance);
typedef void (*SBEngineCallbackFn)(SBQueryEnginePtr engine, SBQueryEngineCallbackReason reason, SBServer server,
                                   void *instance);
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
typedef struct _SBServerFIFO {
    SBServer first;
    SBServer last;
    int count;
} SBServerFIFO;
typedef struct _SBQueryEngine {
    int queryversion;
    int maxupdates;
    SBServerFIFO querylist;
    SBServerFIFO pendinglist;
    SOCKET querysock;

    SOCKET icmpsock;

    goa_uint32 mypublicip;
    unsigned char serverkeys[20];
    int numserverkeys;
    SBEngineCallbackFn ListCallback;
    void *instance;
} SBQueryEngine;
struct _ServerBrowser {
    SBQueryEngine engine;
    SBServerList list;
    SBBool disconnectFlag;
    SBBool dontUpdate;
    goa_uint32 triggerIP;
    unsigned short triggerPort;
    ServerBrowserCallback BrowserCallback;
    SBConnectToServerCallback ConnectCallback;
    void *instance;
};
extern SBError ServerBrowserBeginUpdate2(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete,
                                         const unsigned char *basicFields, int numBasicFields, const char *serverFilter,
                                         int updateOptions, int maxServers);
extern SBError ServerBrowserLimitUpdateA(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete,
                                         const unsigned char *basicFields, int numBasicFields, const char *serverFilter,
                                         int maxServers);
void ListCallback(SBServerList *serverlist, SBListCallbackReason reason, SBServer server, void *instance);
SBError ServerBrowserBeginUpdate2(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete,
                                  const unsigned char *basicFields, int numBasicFields, const char *serverFilter,
                                  int updateOptions, int maxServers);
SBError ServerBrowserLimitUpdateA(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete,
                                  const unsigned char *basicFields, int numBasicFields, const char *serverFilter,
                                  int maxServers) {
    return ServerBrowserBeginUpdate2(sb, async, disconnectOnComplete, basicFields, numBasicFields, serverFilter, 128,
                                     maxServers);
}
