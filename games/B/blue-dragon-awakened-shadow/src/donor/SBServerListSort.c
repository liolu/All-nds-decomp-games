/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SBServerListSort from https://github.com/Project-Holon/aletheia src/game/ov009/sb_serverlist.c (license: none (MIT = tooling
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
extern int func_020755ac(const void *entry1, const void *entry2);
extern int func_0207561c(const void *entry1, const void *entry2);
extern int func_0207572c(const void *entry1, const void *entry2);
extern int func_020757ac(const void *entry1, const void *entry2);
extern void SBServerListSort(SBServerList *slist, int ascending, SBSortInfo sortinfo);
typedef unsigned long size_t;
extern size_t strlen(const char *s);
typedef unsigned long size_t;
struct SBSortContext {
    char *masterHostname;
    SBServerList *slist;
};
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern void ArraySort(struct DArrayImplementation *array, int (*comparator)(const void *, const void *));
extern int func_020755ac(const void *entry1, const void *entry2);
extern int func_0207561c(const void *entry1, const void *entry2);
extern int func_0207572c(const void *entry1, const void *entry2);
extern int func_020757ac(const void *entry1, const void *entry2);
extern void SBServerListSort(SBServerList *slist, int ascending, SBSortInfo sortinfo);
extern struct SBSortContext data_0210fd58;
extern int strcmp(const char *a, const char *b);
int func_020755ac(const void *entry1, const void *entry2);
int func_0207561c(const void *entry1, const void *entry2);
int func_0207572c(const void *entry1, const void *entry2);
int func_020757ac(const void *entry1, const void *entry2);
void SBServerListSort(SBServerList *slist, int ascending, SBSortInfo sortinfo) {
    int (*comparator)(const void *, const void *);

    switch (sortinfo.comparemode) {
        case 0:
            comparator = func_020755ac;
            break;
        case 1:
            comparator = func_0207561c;
            break;
        case 2:
            comparator = func_0207572c;
            break;
        case 3:
            comparator = func_020757ac;
            break;
        default:
            comparator = func_020757ac;
            break;
    }
    if (strlen(slist->prevsortinfo.sortkey) == 0) {
        slist->prevsortinfo = sortinfo;
    } else if (strcmp(sortinfo.sortkey, slist->currsortinfo.sortkey) != 0) {
        slist->prevsortinfo = slist->currsortinfo;
    }
    slist->currsortinfo  = sortinfo;
    slist->sortascending = ascending;
    data_0210fd58.slist  = slist;
    ArraySort(slist->servers, comparator);
}
