/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2ConnectAttemptCallback from https://github.com/Project-Holon/aletheia src/game/ov009/gt2callback.c (license: none (MIT =
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
extern void gti2CloseSocket(GTI2Socket *socket);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern int gti2ConnectAttemptCallback(GTI2Socket *sock, GTI2Connection *c, unsigned int ip, unsigned short port, int latency,
                                      unsigned char *msg, int len);
int gti2ConnectAttemptCallback(GTI2Socket *sock, GTI2Connection *c, unsigned int ip, unsigned short port, int latency,
                               unsigned char *msg, int len) {
    if (!sock || !c) {
        return 1;
    }
    if (!sock->connectAttemptCallback) {
        return 1;
    }
    if (len == 0 || msg == 0) {
        msg = 0;
        len = 0;
    }
    sock->callbackLevel++;
    c->callbackLevel++;
    sock->connectAttemptCallback(sock, c, ip, port, latency, msg, len);
    sock->callbackLevel--;
    c->callbackLevel--;
    if (sock->close && !sock->callbackLevel) {
        gti2CloseSocket(sock);
        return 0;
    }
    return 1;
}
