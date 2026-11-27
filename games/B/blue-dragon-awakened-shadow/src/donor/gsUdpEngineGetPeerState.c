/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gsUdpEngineGetPeerState from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsUdpEngine.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
typedef int gsi_bool;
typedef struct GTI2Socket *GT2Socket;
typedef struct GTI2Connection *GT2Connection;
typedef enum {
    GT2Connecting,
    GT2Connected,
    GT2Closing,
    GT2Closed
} GT2ConnectionState;
extern GT2ConnectionState gt2GetConnectionState(GT2Connection connection);
typedef struct DArrayImplementation *DArray;
typedef int (*ArrayCompareFn)(const void *elem1, const void *elem2);
extern void *ArrayNth(DArray array, int n);
extern int ArraySearch(DArray array, const void *key, ArrayCompareFn comparator, int fromIndex, int isSorted);
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
typedef enum _GSUdpPeerState {
    GS_UDP_PEER_CONNECTING,
    GS_UDP_PEER_CONNECTED,
    GS_UDP_PEER_CLOSING,
    GS_UDP_PEER_CLOSED,

    GS_UDP_PEER_STATE_NUM
} GSUdpPeerState;
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
extern GSUdpErrorCode gsUdpEngineGetPeerState(unsigned int theIp, unsigned short thePort, GSUdpPeerState *thePeerState);
typedef struct {
    unsigned int mAddr;
    unsigned short mPort;
    GT2Connection mConnection;
} GSUdpRemotePeer;
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
int gsUdpRemotePeerCompare(const void *theFirstPeer, const void *theSecondPeer);
GSUdpErrorCode gsUdpEngineGetPeerState(unsigned int theIp, unsigned short thePort, GSUdpPeerState *thePeerState) {
    GSUdpEngineObject *aUdp = gsUdpEngineGetEngine();
    GSUdpRemotePeer aPeer, *aPeerFound;
    int index;
    {};
    ;
    {};
    ;
    {};
    ;
    {};
    ;
    if (!aUdp->mInitialized) {

        ;
        *thePeerState = GS_UDP_PEER_CLOSED;
        return GS_UDP_NOT_INITIALIZED;
    }

    aPeer.mAddr = theIp;
    aPeer.mPort = thePort;
    index       = ArraySearch(aUdp->mRemotePeers, &aPeer, gsUdpRemotePeerCompare, 0, 0);
    if (index == -1) {
        *thePeerState = GS_UDP_PEER_CLOSED;
        return GS_UDP_NO_ERROR;
    }

    aPeerFound = (GSUdpRemotePeer *) ArrayNth(aUdp->mRemotePeers, index);

    *thePeerState = (GSUdpPeerState) gt2GetConnectionState(aPeerFound->mConnection);
    return GS_UDP_NO_ERROR;
}
