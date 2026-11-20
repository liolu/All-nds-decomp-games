/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020bc764 from https://github.com/LagoLunatic/ooe libs/GameSpy/gt2/gt2Message.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
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
typedef enum {

    GTI2MsgAppReliable,
    GTI2MsgClientChallenge,
    GTI2MsgServerChallenge,
    GTI2MsgClientResponse,
    GTI2MsgAccept,
    GTI2MsgReject,
    GTI2MsgClose,
    GTI2MsgKeepAlive,

    GTI2NumReliableMessages,

    GTI2MsgAck = 100,
    GTI2MsgNack,
    GTI2MsgPing,
    GTI2MsgPong,
    GTI2MsgClosed

} GTI2MessageType;
typedef struct GTI2Buffer {
    GT2Byte *buffer;
    int size;
    int len;
} GTI2Buffer;
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
unsigned short func_020bbca0(const GT2Byte *buffer, int pos);
int func_020bbcd4(unsigned short SN1, unsigned short SN2);
GT2Bool func_020bbd78(GT2Connection connection);
GT2Bool func_020bbd8c(GT2Connection connection);
GT2Bool func_020bbdb8(GT2Connection connection, unsigned short ESN);
GT2Bool func_020bc370(GT2Connection connection, GTI2MessageType type, GT2Byte *message, int len);
GT2Bool func_020bc484(GT2Connection connection, GTI2MessageType type, unsigned short SN, GT2Byte *message, int len,
                      GT2Bool *overflow);
GT2Bool func_020bc6bc(GT2Connection connection);
void func_020bc73c(GT2Connection connection);
GT2Bool func_020bc764(GT2Connection connection, GTI2MessageType type, GT2Byte *message, int len) {
    unsigned short SN;
    unsigned short ESN;
    const int headerLength = connection->socket->protocolOffset + 2 + 1 + 2 + 2;
    GT2Bool overflow;

    if (len < (connection->socket->protocolOffset + 2 + 1 + 2 + 2)) {
        if (!func_020bbd78(connection)) {
            return 0;
        }

        return 1;
    }

    SN = func_020bbca0(message + connection->socket->protocolOffset, 2 + 1);

    ESN = func_020bbca0(message + connection->socket->protocolOffset, 2 + 3);

    if (connection->socket->protocolType == GTI2VdpProtocol && type == GTI2MsgAppReliable) {
        message[connection->socket->protocolOffset + 2 + 3] = message[0];
        message[connection->socket->protocolOffset + 2 + 4] = message[1];
        message += headerLength - connection->socket->protocolOffset;
        len -= headerLength - connection->socket->protocolOffset;
    } else {
        message += headerLength;
        len -= headerLength;
    }

    if (!func_020bbdb8(connection, ESN)) {
        return 0;
    }

    if (SN == connection->expectedSerialNumber) {

        func_020bc73c(connection);

        if (!func_020bc370(connection, type, message, len)) {
            return 0;
        }

        if (!func_020bc6bc(connection)) {
            return 0;
        }

        return 1;
    }

    if (func_020bbcd4(SN, connection->expectedSerialNumber) < 0) {

        func_020bc73c(connection);

        return 1;
    }

    if (!func_020bc484(connection, type, SN, message, len, &overflow)) {
        return 0;
    }

    if (overflow) {
        if (!func_020bbd8c(connection)) {
            return 0;
        }
    }

    return 1;
}
