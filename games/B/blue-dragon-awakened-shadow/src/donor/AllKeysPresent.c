/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* AllKeysPresent from https://github.com/Project-Holon/aletheia src/game/ov009/sb_serverlist.c (license: none (MIT = tooling
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
extern int NTSLengthSB(const char *buf, int len);
extern int AllKeysPresent(SBServerList *slist, char *buf, int len);
struct KeyEnt {
    char *keyName;
    int keyType;
};
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern int ArrayLength(struct DArrayImplementation *array);
extern void *ArrayNth(struct DArrayImplementation *array, int n);
extern int NTSLengthSB(const char *buf, int len);
extern int AllKeysPresent(SBServerList *slist, char *buf, int len);
int NTSLengthSB(const char *buf, int len);
int AllKeysPresent(SBServerList *slist, char *buf, int len) {
    int numkeys;
    int i;
    int strindex;
    numkeys = ArrayLength(slist->keylist);
    for (i = 0; i < numkeys; i++) {
        switch (((struct KeyEnt *) ArrayNth(slist->keylist, i))->keyType) {
            case 1:
                buf += 1;
                len -= 1;
                break;
            case 2:
                buf += 2;
                len -= 2;
                break;
            case 0:
                if (len < 1) {
                    return 0;
                }
                if (*(unsigned char *) buf++ == 0xff) {
                    len--;
                    strindex = NTSLengthSB(buf, len);
                    if (strindex == -1) {
                        return 0;
                    }
                    buf += strindex;
                    len -= strindex;
                } else {
                    len--;
                }
                break;
            default:
                return 0;
        }
        if (len < 0) {
            return 0;
        }
    }
    return 1;
}
