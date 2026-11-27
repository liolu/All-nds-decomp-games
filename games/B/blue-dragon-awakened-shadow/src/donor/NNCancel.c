/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNCancel from https://github.com/LagoLunatic/ooe libs/GameSpy/natneg/natneg.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct SOInAddr {
    int addr;
} SOInAddr;
struct SOSockAddrIn {
    u8 _pad;
    u8 family;
    u16 port;
    SOInAddr addr;
};
typedef int SOCKET;
extern int closesocket(SOCKET sock);
typedef enum {
    ns_initsent,
    ns_initack,
    ns_connectping,
    ns_finished,
    ns_canceled,
    ns_reportsent,
    ns_reportack
} NegotiateState;
typedef enum {
    nr_success,
    nr_deadbeatpartner,
    nr_inittimeout,
    nr_pingtimeout,
    nr_unknownerror,
    nr_noresult
} NegotiateResult;
typedef void (*NegotiateProgressFunc)(NegotiateState state, void *userdata);
typedef void (*NegotiateCompletedFunc)(NegotiateResult result, SOCKET gamesocket, struct SOSockAddrIn *remoteaddr,
                                       void *userdata);
extern void NNCancel(int cookie);
struct _NATNegotiator {
    SOCKET negotiateSock;
    SOCKET gameSock;
    int cookie;
    int clientindex;
    NegotiateState state;
    int initAckRecv[4];
    int retryCount;
    int maxRetryCount;
    unsigned long retryTime;
    unsigned int guessedIP;
    unsigned short guessedPort;
    unsigned char gotRemoteData;
    unsigned char sendGotRemoteData;
    NegotiateProgressFunc progressCallback;
    NegotiateCompletedFunc completedCallback;
    void *userdata;
    NegotiateResult result;
    SOCKET connectedSocket;
    struct SOSockAddrIn remoteaddr;
};
typedef struct _NATNegotiator *NATNegotiator;
NATNegotiator FindNegotiatorForCookie(int cookie);
void NNCancel(int cookie) {
    NATNegotiator neg = FindNegotiatorForCookie(cookie);
    if (neg == 0) {
        return;
    }
    if (neg->negotiateSock != (-1)) {
        closesocket(neg->negotiateSock);
    }
    neg->negotiateSock = (-1);
    neg->state         = ns_canceled;
}
