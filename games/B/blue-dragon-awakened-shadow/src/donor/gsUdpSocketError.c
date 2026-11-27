/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gsUdpSocketError from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsUdpEngine.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef int gsi_bool;
typedef struct GTI2Socket *GT2Socket;
typedef struct DArrayImplementation *DArray;
extern int ArrayLength(const DArray array);
extern void *ArrayNth(DArray array, int n);
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
GSUdpEngineObject *gsUdpEngineGetEngine();
void gsUdpSocketError(GT2Socket theSocket) {
    int i, len;
    GSUdpEngineObject *aUdp = gsUdpEngineGetEngine();

    ;
    if (aUdp->mAppNetworkError) {
        aUdp->mAppNetworkError(GS_UDP_NETWORK_ERROR, aUdp->mAppUserData);
    }
    len = ArrayLength(aUdp->mMsgHandlers);
    for (i = 0; i < len; i++) {
        GSUdpMsgHandler *aMsgHandler = (GSUdpMsgHandler *) ArrayNth(aUdp->mMsgHandlers, i);
        if (aMsgHandler->mNetworkError) {
            aMsgHandler->mNetworkError(GS_UDP_NETWORK_ERROR, aMsgHandler->mUserData);
        }
    }
    {
        void *y = &theSocket;
        y       = 0;
    };
}
