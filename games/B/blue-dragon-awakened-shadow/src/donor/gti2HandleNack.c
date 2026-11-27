/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2HandleNack from https://github.com/LagoLunatic/ooe libs/GameSpy/gt2/gt2Message.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned int gsi_time;
typedef int SOCKET;
extern int socket(int pf, int type, int protocol);
typedef int GT2Bool;
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
typedef enum {
    GT2LocalClose,
    GT2RemoteClose,

    GT2CommunicationError,
    GT2SocketError,
    GT2NotEnoughMemory
} GT2CloseReason;
typedef void (*gt2SocketErrorCallback)(GT2Socket socket);
typedef void (*gt2ConnectedCallback)(GT2Connection connection, GT2Result result, GT2Byte *message, int len);
typedef void (*gt2ReceivedCallback)(GT2Connection connection, GT2Byte *message, int len, GT2Bool reliable);
typedef void (*gt2ClosedCallback)(GT2Connection connection, GT2CloseReason reason);
typedef void (*gt2PingCallback)(GT2Connection connection, int latency);
typedef struct {
    gt2ConnectedCallback connected;
    gt2ReceivedCallback received;
    gt2ClosedCallback closed;
    gt2PingCallback ping;
} GT2ConnectionCallbacks;
typedef void (*gt2ConnectAttemptCallback)(GT2Socket socket, GT2Connection connection, unsigned int ip, unsigned short port,
                                          int latency, GT2Byte *message, int len);
typedef GT2Bool (*gt2UnrecognizedMessageCallback)(GT2Socket socket, unsigned int ip, unsigned short port, GT2Byte *message,
                                                  int len);
typedef void (*gt2DumpCallback)(GT2Socket socket, GT2Connection connection, unsigned int ip, unsigned short port,
                                GT2Bool reset, const GT2Byte *message, int len);
typedef struct DArrayImplementation *DArray;
extern int ArrayLength(const DArray array);
extern void *ArrayNth(DArray array, int n);
typedef struct HashImplementation *HashTable;
typedef enum {
    GTI2UdpProtocol,
    GTI2VdpProtocol   = 2,
    GTI2AdHocProtocol = 3
} GTI2ProtocolType;
typedef enum {

    GTI2AwaitingServerChallenge,
    GTI2AwaitingAcceptance,

    GTI2AwaitingClientChallenge,
    GTI2AwaitingClientResponse,
    GTI2AwaitingAcceptReject,

    GTI2Connected,
    GTI2Closing,
    GTI2Closed
} GTI2ConnectionState;
typedef struct GTI2Buffer {
    GT2Byte *buffer;
    int size;
    int len;
} GTI2Buffer;
typedef struct GTI2OutgoingBufferMessage {
    int start;
    int len;
    unsigned short serialNumber;
    gsi_time lastSend;
} GTI2OutgoingBufferMessage;
typedef struct GTI2Socket {
    SOCKET socket;

    unsigned int ip;
    unsigned short port;

    HashTable connections;
    DArray closedConnections;

    GT2Bool close;
    GT2Bool error;

    int callbackLevel;
    gt2ConnectAttemptCallback connectAttemptCallback;
    gt2SocketErrorCallback socketErrorCallback;
    gt2DumpCallback sendDumpCallback;
    gt2DumpCallback receiveDumpCallback;
    gt2UnrecognizedMessageCallback unrecognizedMessageCallback;

    void *data;

    int outgoingBufferSize;
    int incomingBufferSize;

    GTI2ProtocolType protocolType;

    int protocolOffset;
    GT2Bool broadcastEnabled;
} GTI2Socket;
typedef struct GTI2Connection {

    unsigned int ip;
    unsigned short port;

    GTI2Socket *socket;

    GTI2ConnectionState state;

    GT2Bool initiated;

    GT2Bool freeAtAcceptReject;

    GT2Result connectionResult;

    gsi_time startTime;
    gsi_time timeout;

    int callbackLevel;
    GT2ConnectionCallbacks callbacks;

    char *initialMessage;
    int initialMessageLen;

    void *data;

    GTI2Buffer incomingBuffer;
    GTI2Buffer outgoingBuffer;
    DArray incomingBufferMessages;
    DArray outgoingBufferMessages;

    unsigned short serialNumber;
    unsigned short expectedSerialNumber;

    char response[32];

    gsi_time lastSend;
    gsi_time challengeTime;

    GT2Bool pendingAck;

    gsi_time pendingAckTime;

    DArray sendFilters;
    DArray receiveFilters;

} GTI2Connection;
extern GT2Bool gti2ResendMessage(GT2Connection connection, GTI2OutgoingBufferMessage *message);
unsigned short gti2UShortFromBuffer(const GT2Byte *buffer, int pos);
int gti2SNDiff(unsigned short SN1, unsigned short SN2);
GT2Bool gti2ConnectionCommunicationError(GT2Connection connection);
GT2Bool gti2HandleNack(GT2Connection connection, const GT2Byte *message, int len) {
    unsigned short SNMin;
    unsigned short SNMax;
    int num;
    int i;
    GTI2OutgoingBufferMessage *messageInfo;

    SNMin = gti2UShortFromBuffer(message, 0);
    if (len == 2) {
        SNMax = SNMin;
    } else if (len == 4) {
        SNMax = gti2UShortFromBuffer(message, 2);
    } else {
        if (!gti2ConnectionCommunicationError(connection)) {
            return 0;
        }

        return 1;
    }

    num = ArrayLength(connection->outgoingBufferMessages);
    for (i = 0; i < num; i++) {
        messageInfo = (GTI2OutgoingBufferMessage *) ArrayNth(connection->outgoingBufferMessages, i);
        if ((gti2SNDiff(messageInfo->serialNumber, SNMin) >= 0) && (gti2SNDiff(messageInfo->serialNumber, SNMax) <= 0)) {
            if (!gti2ResendMessage(connection, messageInfo)) {
                return 0;
            }
        }
    }

    return 1;
}
GT2Bool gti2ResendMessage(GT2Connection connection, GTI2OutgoingBufferMessage *message);
