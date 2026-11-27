/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* prevKeyCompare from https://github.com/Project-Holon/aletheia src/game/ov009/sb_serverlist.c (license: none (MIT = tooling
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
extern char *SBServerGetStringValueA(SBServer *server, char *keyname, char *def);
extern int func_02074488(SBServer *server, char *key, int idefault);
extern double SBServerGetFloatValueA(SBServer *server, char *key, double fdefault);
struct SBSortContext {
    char *masterHostname;
    SBServerList *slist;
};
extern int func_02074488(SBServer *server, char *key, int idefault);
extern double SBServerGetFloatValueA(SBServer *server, char *key, double fdefault);
extern char *SBServerGetStringValueA(SBServer *server, char *keyname, char *def);
extern int strcasecmp(const char *s1, const char *s2);
extern int func_02075410(SBServer *server1, SBServer *server2);
extern struct SBSortContext data_0210fd58;
extern char data_020fd130[];
extern int strcmp(const char *a, const char *b);
int func_02075410(SBServer *server1, SBServer *server2) {
    char *prevsortkey;
    int diff;
    double f;

    prevsortkey = data_0210fd58.slist->prevsortinfo.sortkey;
    switch (data_0210fd58.slist->prevsortinfo.comparemode) {
        case 0:
            diff = func_02074488(server1, prevsortkey, 0) - func_02074488(server2, prevsortkey, 0);
            break;
        case 1:
            f = SBServerGetFloatValueA(server1, prevsortkey, 0) - SBServerGetFloatValueA(server2, prevsortkey, 0);
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
        case 2:
            diff = strcmp(SBServerGetStringValueA((SBServer *) server1, prevsortkey, (char *) data_020fd130),
                          SBServerGetStringValueA((SBServer *) server2, prevsortkey, (char *) data_020fd130));
            break;
        case 3:
            diff = strcasecmp((SBServerGetStringValueA((SBServer *) server1, prevsortkey, (char *) data_020fd130)),
                              (SBServerGetStringValueA((SBServer *) server2, prevsortkey, (char *) data_020fd130)));
            break;
        default:
            return 0;
    }
    if (!data_0210fd58.slist->sortascending) {
        diff = -diff;
    }
    return diff;
}
