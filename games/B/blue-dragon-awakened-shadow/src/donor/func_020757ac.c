/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StrCaseKeyCompare from https://github.com/Project-Holon/aletheia src/game/ov009/sb_serverlist.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
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
extern int func_020757ac(const void *entry1, const void *entry2);
extern char *SBServerGetStringValueA(SBServer *server, char *keyname, char *def);
struct SBSortContext {
    char *masterHostname;
    SBServerList *slist;
};
extern char *SBServerGetStringValueA(SBServer *server, char *keyname, char *def);
extern int func_02075410(SBServer *server1, SBServer *server2);
extern int func_020757ac(const void *entry1, const void *entry2);
extern struct SBSortContext data_0210fd58;
extern char data_020fd130[];
extern int strcasecmp(const char *a, const char *b);
int func_02075410(SBServer *server1, SBServer *server2);
int func_020757ac(const void *entry1, const void *entry2) {
    char *currsortkey;
    int diff;
    void *server1;
    void *server2;
    server1     = *(void *const *) entry1;
    server2     = *(void *const *) entry2;
    currsortkey = data_0210fd58.slist->currsortinfo.sortkey;
    diff        = strcasecmp(SBServerGetStringValueA(server1, currsortkey, (char *) data_020fd130),
                             SBServerGetStringValueA(server2, currsortkey, (char *) data_020fd130));
    if (diff == 0) {
        return func_02075410(server1, server2);
    }
    if (data_0210fd58.slist->sortascending == 0) {
        diff = -diff;
    }
    return diff;
}
