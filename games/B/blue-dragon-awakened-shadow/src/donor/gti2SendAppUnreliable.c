/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2SendAppUnreliable from https://github.com/Project-Holon/aletheia src/game/ov009/gt2message.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
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
typedef unsigned char u8;
typedef unsigned long size_t;
extern int gti2ConnectionSendData(struct GTI2Connection *connection, unsigned char *message, int len);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern int gti2GetBufferFreeSpace(const GTI2Buffer *p);
extern void gti2BufferWriteData(GTI2Buffer *buffer, unsigned char *data, int len);
extern void gti2BufferShorten(GTI2Buffer *buffer, int start, int shortenBy);
extern int memcmp(const void *buf1, const void *buf2, size_t n);
extern int socket(int pf, int type, int protocol);
extern int gti2SendAppUnreliable(GTI2Connection *connection, u8 *message, int len);
extern unsigned char data_020fbc54[];
int gti2SendAppUnreliable(GTI2Connection *connection, u8 *message, int len) {
    u8 *start;
    int totalLen;
    int freeSpace;

    if (len < 2 || memcmp(message + connection->socket->protocolOffset, data_020fbc54, 2) != 0) {
        if (!gti2ConnectionSendData(connection, message, len)) {
            return 0;
        }
        return 1;
    }
    totalLen  = len + 2;
    freeSpace = gti2GetBufferFreeSpace(&connection->outgoingBuffer);
    if (freeSpace < totalLen) {
        return 1;
    }
    start = connection->outgoingBuffer.buffer + connection->outgoingBuffer.len;
    if (connection->socket->protocolType == 2) {
        gti2BufferWriteData(&connection->outgoingBuffer, message, 2);
    }
    gti2BufferWriteData(&connection->outgoingBuffer, data_020fbc54, 2);
    gti2BufferWriteData(&connection->outgoingBuffer, message + connection->socket->protocolOffset,
                        len - connection->socket->protocolOffset);
    if (!gti2ConnectionSendData(connection, start, totalLen)) {
        return 0;
    }
    gti2BufferShorten(&connection->outgoingBuffer, -1, totalLen);
    return 1;
}
