/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SBReleaseStr from https://github.com/Project-Holon/aletheia src/game/ov009/sb_serverlist.c (license: none (MIT = tooling
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
extern void SBReleaseStr(void *slist, char *str);
extern int TableRemove(struct HashImplementation *table, void *delElem);
extern void *TableLookup(struct HashImplementation *table, void *elemKey);
extern struct HashImplementation *SBRefStrHash(struct SBServerList *slist);
struct Ref {
    char *str;
    int refcount;
};
extern void SBReleaseStr(void *slist, char *str);
void SBReleaseStr(void *slist, char *str) {
    struct Ref ref;
    struct Ref *val;
    ref.str = str;
    val     = TableLookup(SBRefStrHash(slist), &ref);
    if (val == 0) {
        return;
    }
    if (--val->refcount == 0) {
        TableRemove(SBRefStrHash(slist), &ref);
    }
}
