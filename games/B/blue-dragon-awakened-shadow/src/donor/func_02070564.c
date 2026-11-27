/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* AddNegotiator from https://github.com/Project-Holon/aletheia src/game/ov009/natneg.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct SOCSockAddrIn {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
} SOCSockAddrIn;
typedef struct DArrayImplementation *DArray;
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern struct DArrayImplementation *ArrayNew(int elemSize, int numElemsToAllocate, void (*elemFreeFn)(void *));
extern int ArrayLength(struct DArrayImplementation *array);
extern void *ArrayNth(struct DArrayImplementation *array, int n);
extern void ArrayAppend(struct DArrayImplementation *array, void *newElem);
typedef struct NNSockAddr {
    unsigned char len;
    unsigned char family;
    unsigned char port[2];
    unsigned char addr[4];
} NNSockAddr;
typedef struct _NATNegotiator {
    int gameSock;
    int cookie;
    int clientIndex;
    void (*progressCallback)(int state, void *userdata);
    void (*completedCallback)(int result, int gameSocket, SOCSockAddrIn *remoteaddr, void *userdata);
    void *userdata;
    int negotiateSock;
    int state;
    int initAckRecv[4];
    int retryCount;
    int maxRetryCount;
    unsigned int retryTime;
    unsigned int guessedIP;
    unsigned short guessedPort;
    unsigned char gotRemoteData;
    unsigned char sendGotRemoteData;
    int result;
    int socket;
    NNSockAddr remoteaddr;
} NATNegotiator;
extern int socket(int pf, int type, int protocol);
extern NATNegotiator *func_02070564(void);
extern struct DArrayImplementation *negotiateList;
extern DArray negotiateList;
NATNegotiator *func_02070564(void) {
    NATNegotiator _neg = {0};

    if (!negotiateList) {
        negotiateList = ArrayNew(sizeof(NATNegotiator), 4, 0);
    }
    ArrayAppend(negotiateList, &_neg);
    return (NATNegotiator *) ArrayNth(negotiateList, ArrayLength((struct DArrayImplementation *) negotiateList) - 1);
}
