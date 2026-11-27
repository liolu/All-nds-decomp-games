/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2SendAck from https://github.com/Project-Holon/aletheia src/game/ov009/gt2message.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
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
extern int gti2ConnectionSendData(struct GTI2Connection *connection, unsigned char *message, int len);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern int socket(int pf, int type, int protocol);
extern void gti2UShortToBuffer(char *buffer, int pos, int s);
extern int gti2SendAck(GTI2Connection *connection);
extern unsigned char data_020fbc54[];
void gti2UShortToBuffer(char *p, int i, int v);
int gti2SendAck(GTI2Connection *connection) {
    short dataLength;
    int pos;
    char buffer[7];

    pos = 0;
    if (connection->socket->protocolType == 2) {
        unsigned char *s;
        unsigned char *d;
        dataLength = 5;
        s          = (unsigned char *) &dataLength;
        d          = (unsigned char *) buffer + pos;
        d[0]       = s[0];
        d[1]       = s[1];
        pos += 2;
    }
    {
        unsigned char *s = data_020fbc54;
        unsigned char *d = (unsigned char *) buffer + pos;
        d[0]             = s[0];
        d[1]             = s[1];
        pos += 2;
    }
    buffer[pos] = 100;
    pos += 1;
    gti2UShortToBuffer((char *) buffer, pos, connection->expectedSerialNumber);
    pos += 2;
    if (gti2ConnectionSendData(connection, (unsigned char *) buffer, pos)) {
        connection->pendingAck = 0;
        return 1;
    }
    return 0;
}
