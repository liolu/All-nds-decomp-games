/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ab8fc from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsUdpEngine.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
typedef int gsi_bool;
typedef unsigned char GT2Byte;
typedef struct GTI2Socket *GT2Socket;
typedef struct GTI2Connection *GT2Connection;
typedef enum {
    GT2Success,

    GT2OutOfMemory,
    GT2Rejected,
    GT2NetworkError,
    GT2AddressError,
    GT2DuplicateAddress,
    GT2TimedOut,
    GT2NegotiationError,
    GT2InvalidConnection,
    GT2InvalidMessage,
    GT2SendFailed
} GT2Result;
extern unsigned int func_020bbc48(GT2Connection connection);
extern unsigned short func_020bbc50(GT2Connection connection);
typedef struct DArrayImplementation *DArray;
typedef int (*ArrayCompareFn)(const void *elem1, const void *elem2);
extern int func_020aa068(const DArray array);
extern void *func_020aa070(DArray array, int n);
extern void func_020aa1e4(DArray array, int n);
extern int func_020aa250(DArray array, const void *key, ArrayCompareFn comparator, int fromIndex, int isSorted);
typedef enum _GSUdpErrorCode {
    GS_UDP_NO_ERROR,
    GS_UDP_NO_MEMORY,
    GS_UDP_REJECTED,
    GS_UDP_NETWORK_ERROR,
    GS_UDP_ADDRESS_ERROR,
    GS_UDP_ADDRESS_ALREADY_IN_USE,
    GS_UDP_TIMED_OUT,
    GS_UDP_REMOTE_ERROR,
    GS_UDP_SEND_FAILED,
    GS_UDP_INVALID_MESSAGE,
    GS_UDP_PARAMETER_ERROR,
    GS_UDP_NOT_INITIALIZED,
    GS_UDP_MSG_TOO_BIG,
    GS_UDP_UNKNOWN_ERROR,

    GS_UDP_NUM_ERROR_CODES
} GSUdpErrorCode;
typedef enum _GSUdpCloseReason {
    GS_UDP_CLOSED_LOCALLY,
    GS_UDP_CLOSED_REMOTELY,

    GS_UDP_CLOSED_BY_COMM_ERROR,
    GS_UDP_CLOSED_BY_LOW_MEM,

    GS_UDP_CLOSED_NUM
} GSUdpCloseReason;
typedef void (*gsUdpErrorCallback)(GSUdpErrorCode theCode, void *theUserData);
typedef void (*gsUdpAppConnectAttemptCallback)(unsigned int theIp, unsigned short thePort, int theLatency,
                                               unsigned char *theInitMsg, unsigned int theInitMsgLen, void *theUserData);
typedef void (*gsUdpConnClosedCallback)(unsigned int ip, unsigned short port, GSUdpCloseReason reason, void *theUserData);
typedef void (*gsUdpConnReceivedDataCallback)(unsigned int ip, unsigned short port, unsigned char *message,
                                              unsigned int messageLength, gsi_bool reliable, void *theUserData);
typedef void (*gsUdpConnConnectedCallback)(unsigned int ip, unsigned short port, GSUdpErrorCode error, gsi_bool rejected,
                                           void *theUserData);
typedef void (*gsUdpConnPingCallback)(unsigned int ip, unsigned short port, unsigned int latency, void *theUserData);
typedef gsi_bool (*gsUdpUnknownMsgCallback)(unsigned int ip, unsigned short port, unsigned char *message,
                                            unsigned int messageLength, void *theUserData);
typedef struct {
    unsigned int mAddr;
    unsigned short mPort;
    GT2Connection mConnection;
} GSUdpRemotePeer;
typedef struct {
    unsigned char mInitialMsg[16];
    unsigned char mHeader[16];
    DArray mPendingConnections;
    gsUdpConnClosedCallback mClosed;
    gsUdpConnReceivedDataCallback mReceived;
    gsUdpConnConnectedCallback mConnected;
    gsUdpConnPingCallback mPingReply;
    gsUdpErrorCallback mNetworkError;
    void *mUserData;
} GSUdpMsgHandler;
typedef struct {
    GT2Socket mSocket;
    DArray mRemotePeers;
    DArray mMsgHandlers;
    gsi_bool mInitialized;

    gsUdpConnConnectedCallback mAppConnected;
    gsUdpConnClosedCallback mAppClosed;
    gsUdpConnPingCallback mAppPingReply;
    gsUdpConnReceivedDataCallback mAppRecvData;
    gsUdpAppConnectAttemptCallback mAppConnAttempt;

    gsUdpErrorCallback mAppNetworkError;

    gsUdpUnknownMsgCallback mAppUnknownMessage;
    void *mAppUserData;

    int mAppPendingConnections;
    unsigned int mLocalAddr;
    unsigned short mLocalPort;
} GSUdpEngineObject;
GSUdpEngineObject *func_020ab6e8();
int func_020ab72c(const void *theFirstPeer, const void *theSecondPeer);
void func_020ab8fc(GT2Connection theConnection, GT2Result theResult, GT2Byte *theMessage, int theMessageLen) {
    GSUdpEngineObject *aUdp = func_020ab6e8();
    int aIndex, len;
    GSUdpErrorCode aCode;
    char anAddr[22];

    switch (theResult) {
        case GT2NegotiationError:
            aCode = GS_UDP_REMOTE_ERROR;
            break;
        case GT2Rejected:
            aCode = GS_UDP_REJECTED;
            break;
        case GT2TimedOut:
            aCode = GS_UDP_TIMED_OUT;
            break;
        case GT2Success:
            aCode = GS_UDP_NO_ERROR;
            break;
        default:
            aCode = GS_UDP_UNKNOWN_ERROR;
            break;
    }
    if (theResult == GT2Rejected) {
        int aRemotePeerIdx;
        GSUdpRemotePeer aRemotePeer;
        aRemotePeer.mAddr = func_020bbc48(theConnection);
        aRemotePeer.mPort = func_020bbc50(theConnection);
        aRemotePeerIdx    = func_020aa250(aUdp->mRemotePeers, &aRemotePeer, func_020ab72c, 0, 0);
        if (aRemotePeerIdx != -1) {

            ;

            func_020aa1e4(aUdp->mRemotePeers, aRemotePeerIdx);
        }
    }

    len = func_020aa068(aUdp->mMsgHandlers);
    for (aIndex = 0; aIndex < len; aIndex++) {
        int aRemotePeerIdx;
        GSUdpRemotePeer aRemotePeer;
        GSUdpMsgHandler *aTempHandler = (GSUdpMsgHandler *) func_020aa070(aUdp->mMsgHandlers, aIndex);

        aRemotePeer.mAddr = func_020bbc48(theConnection);
        aRemotePeer.mPort = func_020bbc50(theConnection);
        aRemotePeerIdx    = func_020aa250(aTempHandler->mPendingConnections, &aRemotePeer, func_020ab72c, 0, 0);
        if (aRemotePeerIdx != -1) {
            if (aTempHandler->mConnected) {

                ;
                aTempHandler->mConnected(func_020bbc48(theConnection), func_020bbc50(theConnection), aCode,
                                         theResult == GT2Rejected ? ((gsi_bool) 1) : ((gsi_bool) 0), aTempHandler->mUserData);
            }
            func_020aa1e4(aTempHandler->mPendingConnections, aRemotePeerIdx);
            return;
        }
    }

    if (aUdp->mAppPendingConnections > 0) {
        if (aUdp->mAppConnected) {

            ;
            aUdp->mAppConnected(func_020bbc48(theConnection), func_020bbc50(theConnection), aCode,
                                theResult == GT2Rejected ? ((gsi_bool) 1) : ((gsi_bool) 0), aUdp->mAppUserData);
        }
        aUdp->mAppPendingConnections--;
    }
    {
        void *y = &theMessage;
        y       = 0;
    };
    {
        void *y = &theMessageLen;
        y       = 0;
    };
    {
        void *y = &anAddr;
        y       = 0;
    };
}
