/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FloatKeyCompare from https://github.com/Project-Holon/aletheia src/game/ov009/sb_serverlist.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct SBServer {
    unsigned int publicip;
    unsigned short publicport;
    unsigned int privateip;
    unsigned short privateport;
    unsigned int icmpip;
    unsigned char state;
    unsigned char flags;
    struct HashImplementation *keyvals;
    unsigned int updatetime;
    unsigned int querychallenge;
    struct SBServer *next;
    unsigned char splitResponseBitmap;
} SBServer;
typedef void (*SBListCB)(struct SBServerList *, int, SBServer *, void *);
typedef void (*SBMaploopCB)(struct SBServerList *slist, void *server, long changeTime, int count, char **mapList,
                            void *instance);
typedef void (*SBPlayerSearchCB)(struct SBServerList *, char *, unsigned int, unsigned short, long, char *, void *);
typedef struct SBSortInfo {
    char sortkey[256];
    int comparemode;
} SBSortInfo;
typedef struct SBServerList {
    int state;
    void *servers;
    void *keylist;
    char queryforgamename[36];
    char queryfromgamename[36];
    char queryfromkey[32];
    char mychallenge[8];
    unsigned char *inbuffer;
    int inbufferlen;
    char *popularvalues[255];
    int numpopularvalues;
    int expectedelements;
    SBListCB ListCallback;
    SBMaploopCB MaploopCallback;
    SBPlayerSearchCB PlayerSearchCallback;
    void *instance;
    SBSortInfo currsortinfo;
    SBSortInfo prevsortinfo;
    int sortascending;
    unsigned int mypublicip;
    unsigned int srcip;
    unsigned short defaultport;
    char *lasterror;
    int slsocket;
    unsigned int lanstarttime;
    int fromgamever;
    char cryptkey[0x108];
    int queryoptions;
    int pstate;
    unsigned short backendgameflags;
    char *mLanAdapterOverride;
    SBServer *deadlist;
} SBServerList;
extern int func_02075410(SBServer *server1, SBServer *server2);
extern int func_0207561c(const void *entry1, const void *entry2);
extern double SBServerGetFloatValueA(SBServer *server, char *key, double fdefault);
struct SBSortContext {
    char *masterHostname;
    SBServerList *slist;
};
extern double SBServerGetFloatValueA(SBServer *server, char *key, double fdefault);
extern int func_02075410(SBServer *server1, SBServer *server2);
extern int func_0207561c(const void *entry1, const void *entry2);
extern struct SBSortContext data_0210fd58;
int func_02075410(SBServer *server1, SBServer *server2);
int func_0207561c(const void *entry1, const void *entry2) {
    SBServer *server1 = *(SBServer **) entry1;
    SBServer *server2 = *(SBServer **) entry2;
    double f;
    char *currsortkey = data_0210fd58.slist->currsortinfo.sortkey;

    f = SBServerGetFloatValueA(server1, currsortkey, 0) - SBServerGetFloatValueA(server2, currsortkey, 0);
    if (!((float) f > 0 || (float) f < 0)) {
        return func_02075410(server1, server2);
    }
    if (!data_0210fd58.slist->sortascending) {
        f = 0 - f;
    }
    if ((float) f > 0) {
        return 1;
    }
    if ((float) f < 0) {
        return -1;
    }
    return 0;
}
