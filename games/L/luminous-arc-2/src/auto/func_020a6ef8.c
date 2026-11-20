/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a6ef8 from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_server.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
typedef int time_t;
typedef unsigned char gsi_u8;
typedef unsigned short gsi_u16;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef int SOCKET;
extern void *func_020ab2dc(size_t size);
extern void func_020ab30c(void *ptr);
typedef struct DArrayImplementation *DArray;
typedef struct HashImplementation *HashTable;
typedef int (*TableHashFn)(const void *elem, int numBuckets);
typedef int (*TableCompareFn)(const void *elem1, const void *elem2);
typedef void (*TableElementFreeFn)(void *elem);
extern HashTable func_020aa4a4(int elemSize, int nBuckets, int nChains, TableHashFn hashFn, TableCompareFn compFn,
                               TableElementFreeFn freeFn);
typedef struct _SBServer *SBServer;
typedef enum {
    SBFalse,
    SBTrue
} SBBool;
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
typedef struct _SBKeyValuePair {
    const char *key;
    const char *value;
} SBKeyValuePair;
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
extern SBServer func_020a6ef8(SBServerList *slist, goa_uint32 publicip, unsigned short publicport);
void func_020a6e98(void *elem);
int func_020a6ebc(const void *elem, int numbuckets);
int func_020a6ecc(const void *entry1, const void *entry2);
SBServer func_020a6ef8(SBServerList *slist, goa_uint32 publicip, unsigned short publicport) {
    SBServer server;
    server = (SBServer) func_020ab2dc(sizeof(struct _SBServer));
    if (server == 0) {
        return 0;
    }
    server->keyvals = func_020aa4a4(sizeof(SBKeyValuePair), 8, 4, func_020a6ebc, func_020a6ecc, func_020a6e98);
    if (server->keyvals == 0) {
        func_020ab30c(server);
        return 0;
    }
    server->state       = 0;
    server->flags       = 0;
    server->next        = 0;
    server->updatetime  = 0;
    server->icmpip      = 0;
    server->publicip    = publicip;
    server->publicport  = publicport;
    server->privateip   = 0;
    server->privateport = 0;

    {
        void *y = &slist;
        y       = 0;
    };
    return server;
}
