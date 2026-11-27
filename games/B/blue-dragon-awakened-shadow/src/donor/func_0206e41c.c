/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2HandleMessage from https://github.com/Project-Holon/aletheia src/game/ov009/gt2message.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct GTI2Connection GTI2Connection;
typedef struct GTI2Socket GTI2Socket;
typedef void (*GT2DumpCallback)(GTI2Socket *, GTI2Connection *, unsigned int, unsigned short, int, unsigned char *, int);
typedef int (*GT2UnrecognizedMessageCallback)(GTI2Socket *, unsigned int, unsigned short, unsigned char *, int);
typedef struct GTI2Buffer {
    unsigned char *buffer;
    int size;
    int len;
} GTI2Buffer;
typedef struct GT2ConnectionCallbacks {
    void (*connected)(GTI2Connection *, int, unsigned char *, int);
    void (*received)(GTI2Connection *, unsigned char *, int, int);
    void (*closed)(GTI2Connection *, int);
    void (*ping)(GTI2Connection *, int);
} GT2ConnectionCallbacks;
struct GTI2Connection {
    unsigned int ip;
    unsigned short port;
    GTI2Socket *socket;
    int state;
    int initiated;
    int freeAtAcceptReject;
    int connectionResult;
    unsigned int startTime;
    unsigned int timeout;
    int callbackLevel;
    GT2ConnectionCallbacks callbacks;
    char *initialMessage;
    int initialMessageLen;
    void *data;
    GTI2Buffer incomingBuffer;
    GTI2Buffer outgoingBuffer;
    struct DArrayImplementation *incomingBufferMessages;
    struct DArrayImplementation *outgoingBufferMessages;
    unsigned short serialNumber;
    unsigned short expectedSerialNumber;
    unsigned char response[32];
    unsigned int lastSend;
    unsigned int challengeTime;
    int pendingAck;
    unsigned int pendingAckTime;
    struct DArrayImplementation *sendFilters;
    struct DArrayImplementation *receiveFilters;
};
struct GTI2Socket {
    int socket;
    unsigned int ip;
    unsigned short port;
    struct HashImplementation *connections;
    struct DArrayImplementation *closedConnections;
    int close;
    int error;
    int callbackLevel;
    GT2DumpCallback connectAttemptCallback;
    void (*socketErrorCallback)(GTI2Socket *);
    GT2DumpCallback sendDumpCallback;
    GT2DumpCallback receiveDumpCallback;
    GT2UnrecognizedMessageCallback unrecognizedMessageCallback;
    void *data;
    int outgoingBufferSize;
    int incomingBufferSize;
    int protocolType;
    int protocolOffset;
    int broadcastEnabled;
};
typedef unsigned long size_t;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long size_t;
extern int gti2NewIncomingConnection(struct GTI2Socket *socket, struct GTI2Connection **connection, unsigned int ip,
                                     unsigned short port);
extern int gti2DumpCallback(GTI2Socket *sock, GTI2Connection *c, unsigned int ip, unsigned short port, int reset,
                            unsigned char *msg, int len, int send);
extern int func_0206cb34(GTI2Socket *socket, unsigned int ip, unsigned short port, unsigned char *message, int len,
                         int *handled);
extern int gti2SendClosed(GTI2Connection *connection);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern int memcmp(const void *buf1, const void *buf2, size_t n);
extern GTI2Connection *gti2SocketFindConnection(GTI2Socket *socket, u32 ip, u16 port);
extern int socket(int pf, int type, int protocol);
extern int send(int sock, char *buffer, int bufferLen, int flags);
extern int func_0206e41c(GTI2Socket *socket, unsigned char *message, int len, unsigned int ip, unsigned short port);
extern int gti2HandleAppUnreliable(GTI2Connection *c, unsigned char *msg, int len);
extern int gti2HandleReliableMessage(GTI2Connection *connection, int type, unsigned char *message, int len);
extern int gti2HandleUnreliableMessage(GTI2Connection *c, int type, unsigned char *message, int len);
extern int func_0206f21c(GTI2Socket *sock, unsigned int ip, unsigned short port);
extern unsigned char data_020fbc54[];
int gti2HandleAppUnreliable(GTI2Connection *c, unsigned char *msg, int len);
int gti2HandleReliableMessage(GTI2Connection *connection, int type, unsigned char *message, int len);
int gti2HandleUnreliableMessage(GTI2Connection *c, int type, unsigned char *message, int len);
int func_0206e41c(GTI2Socket *socket, unsigned char *message, int len, unsigned int ip, unsigned short port) {
    GTI2Connection *connection;
    int magicString;
    int result;
    int type;
    int handled;
    int actualLength;
    unsigned char *actualMessage;

    actualLength  = len - socket->protocolOffset;
    actualMessage = message + socket->protocolOffset;

    connection = gti2SocketFindConnection(socket, ip, port);

    if (socket->receiveDumpCallback) {
        if (!gti2DumpCallback(socket, connection, ip, port, 0, message, len, 0)) {
            return 0;
        }
    }

    magicString = (actualLength > 2) && !memcmp((unsigned char *) actualMessage, (unsigned char *) data_020fbc54, 2);

    if (!connection) {
        if (!func_0206cb34(socket, ip, port, message, len, &handled)) {
            return 0;
        }
        if (handled) {
            return 1;
        }

        if (!magicString || actualMessage[2] != 1) {
            if (!magicString || actualMessage[2] != 0x68) {
                if (!func_0206f21c((GTI2Socket *) socket, ip, port)) {
                    return 0;
                }
            }
            return 1;
        }
        if (!socket->connectAttemptCallback) {
            return 1;
        }
        result = gti2NewIncomingConnection(socket, &connection, ip, port);
        if (result != 0) {
            if (result != 5) {
                if (!func_0206f21c((GTI2Socket *) socket, ip, port)) {
                    return 0;
                }
            }
            return 1;
        }
    }

    if (connection->state == 7) {
        if (!magicString || actualMessage[2] != 0x68) {
            if (!gti2SendClosed(connection)) {
                return 0;
            }
        }
        return 1;
    }

    if (magicString && actualLength >= 4 &&
        !memcmp((unsigned char *) (actualMessage + 2), (unsigned char *) data_020fbc54, 2)) {
        message[3] = message[1];
        message[2] = message[0];
        message += 2;
        actualMessage += 2;
        len -= 2;
        magicString = 0;
    }

    if (!magicString) {
        if (connection->state < 5) {
            if (!func_0206cb34(socket, ip, port, message, len, &handled)) {
                return 0;
            }
        } else {
            if (!gti2HandleAppUnreliable((GTI2Connection *) connection, message, len)) {
                return 0;
            }
        }
        return 1;
    }

    type = actualMessage[2];
    if (type < 8) {
        return gti2HandleReliableMessage(connection, type, message, len) != 0;
    }
    if (!gti2HandleUnreliableMessage((GTI2Connection *) ((GTI2Connection *) connection), type, message, len)) {
        return 0;
    }
    return 1;
}
int gti2SendClosed(GTI2Connection *p);
int func_0206f21c(GTI2Socket *sock, unsigned int ip, unsigned short port);
