/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2ReceiveMessages from https://github.com/Project-Holon/aletheia src/game/ov009/gt2message.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
struct HashImplementation;
typedef int GT2Bool;
typedef enum {
    GT2Success,
    GT2OutOfMemory,
    GT2Rejected
} GT2Result;
typedef enum {
    GT2LocalClose,
    GT2RemoteClose
} GT2CloseReason;
struct DArrayImplementation;
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
struct GTI2IncomingBufferMessage {
    int start;
    int len;
    int type;
    unsigned short serialNumber;
};
struct GTI2OutgoingBufferMessage {
    int offset;
    int len;
    unsigned short SN;
    unsigned short pad;
    unsigned int sendTime;
};
typedef struct GTI2IncomingBufferMessage GTI2IncomingBufferMessage;
typedef struct GTI2OutgoingBufferMessage GTI2OutgoingBufferMessage;
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
extern char *strcpy(char *dst, const char *src);
extern void *memcpy(void *dst, const void *src, size_t n);
extern void *memset(void *dst, int c, size_t n);
extern size_t strlen(const char *s);
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned long size_t;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef float f32;
typedef volatile f32 vf32;
typedef int BOOL;
typedef u32 uptr;
typedef s32 sptr;
typedef struct SOCInAddr {
    u32 addr;
} SOCInAddr;
typedef struct SOCSockAddrIn {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
} SOCSockAddrIn;
typedef struct SOCHostEnt {
    char *name;
    char **aliases;
    s16 addrType;
    s16 length;
    u8 **addrList;
} SOCHostEnt;
typedef void *(*SOCAlloc)(unsigned long name, long size);
typedef void (*SOCFree)(unsigned long name, void *ptr, long size);
typedef long long SOCTime;
typedef struct SOCConfig {
    u16 vendor;
    u16 version;
    SOCAlloc alloc;
    SOCFree free;
    unsigned long flag;
    SOCInAddr addr;
    SOCInAddr netmask;
    SOCInAddr router;
    SOCInAddr dns1;
    SOCInAddr dns2;
    long timeWaitBuffer;
    long reassemblyBuffer;
    long mtu;
    long rwin;
    SOCTime r2;
    const char *peerid;
    const char *passwd;
    const char *serviceName;
    const char *hostName;
    long rdhcp;
    long udpSendBuff;
    long udpRecvBuff;
} SOCConfig;
struct GTI2Socket;
struct GTI2Connection;
struct GT2ConnectionCallbacks;
extern int gti2NewOutgoingConnection(struct GTI2Socket *socket, struct GTI2Connection **connection, unsigned int ip,
                                     unsigned short port);
extern int gti2NewIncomingConnection(struct GTI2Socket *socket, struct GTI2Connection **connection, unsigned int ip,
                                     unsigned short port);
extern int gti2StartConnectionAttempt(struct GTI2Connection *c, unsigned char *message, int len,
                                      struct GT2ConnectionCallbacks *callbacks);
extern int gti2AcceptConnection(struct GTI2Connection *connection, struct GT2ConnectionCallbacks *callbacks);
extern void gti2RejectConnection(struct GTI2Connection *connection, unsigned char *message, int len);
extern int gti2ConnectionSendData(struct GTI2Connection *connection, unsigned char *message, int len);
extern int gti2CheckTimeout(struct GTI2Connection *c, unsigned int now);
extern int gti2ConnectionThink(struct GTI2Connection *connection, unsigned int now);
extern void gti2CloseConnection(struct GTI2Connection *connection, int hard);
extern void gti2ConnectionClosed(struct GTI2Connection *connection);
extern void gti2ConnectionCleanup(struct GTI2Connection *c);
extern int gti2SocketErrorCallback(GTI2Socket *socket);
extern int gti2ConnectAttemptCallback(GTI2Socket *sock, GTI2Connection *c, unsigned int ip, unsigned short port, int latency,
                                      unsigned char *msg, int len);
extern int gti2ConnectedCallback(GTI2Connection *c, int result, unsigned char *msg, int len);
extern int gti2ReceivedCallback(GTI2Connection *c, unsigned char *msg, int len, int reliable);
extern int gti2ClosedCallback(GTI2Connection *connection, int reason);
extern int gti2PingCallback(GTI2Connection *c, int latency);
extern int gti2SendFilterCallback(GTI2Connection *c, int filterID, unsigned char *msg, int len, int reliable);
extern int gti2ReceiveFilterCallback(GTI2Connection *c, int filterID, unsigned char *msg, int len, int reliable);
extern int gti2DumpCallback(GTI2Socket *sock, GTI2Connection *c, unsigned int ip, unsigned short port, int reset,
                            unsigned char *msg, int len, int send);
extern int gti2UnrecognizedMessageCallback(GTI2Socket *socket, unsigned int ip, unsigned short port, unsigned char *message,
                                           int len, int *handled);
extern int gti2SendClosed(GTI2Connection *connection);
struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};
typedef struct B64StreamData {
    char *data;
    int len;
    int mode;
} B64StreamData;
struct GSIResolveHostnameInfo;
struct tm;
extern void gsiInt64ToString(char *theNumberStr, long long theNumber);
extern int gsiStartResolvingHostname(char *hostname, struct GSIResolveHostnameInfo **handle);
extern void gsiCancelResolvingHostname(void *p);
extern int gsiGetResolvedIP(int *p);
extern char *goastrdup(char *src);
extern char *_strlwr(char *s);
extern void SocketStartUp(void);
extern void SocketShutDown(void);
extern unsigned int current_time(void);
extern unsigned int current_time_hires(void);
extern void msleep(unsigned int msec);
extern struct tm *gsiSecondsToDate(long *timp);
extern long gsiDateToSeconds(struct tm *tb);
extern int nextlongrand(long seed);
extern int longrand(void);
extern void Util_RandSeed(unsigned int v);
extern unsigned int Util_RandInt(unsigned int min, unsigned int max);
extern void QuartToTrip(char *quart, char *trip, int inlen);
extern void TripToQuart(const char *src, u8 *dst, int n);
extern void B64Decode(const char *input, char *output, int inlen, int *outlen, int encodingType);
extern void B64Encode(const char *input, char *output, int inlen, int encodingType);
extern int B64DecodeLen(char *input, int encodingType);
extern void B64InitEncodeStream(B64StreamData *data, unsigned char *input, int len, int type);
extern int B64EncodeStream(B64StreamData *data, char *output);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
struct DArrayImplementation;
extern struct DArrayImplementation *ArrayNew(int elemSize, int numElemsToAllocate, void (*elemFreeFn)(void *));
extern void ArrayFree(struct DArrayImplementation *array);
extern int ArrayLength(struct DArrayImplementation *array);
extern void *ArrayNth(struct DArrayImplementation *array, int n);
extern void ArrayAppend(struct DArrayImplementation *array, void *newElem);
extern void ArrayInsertAt(struct DArrayImplementation *array, void *newElem, int n);
extern void ArrayInsertSorted(struct DArrayImplementation *array, void *newElem, int (*comparator)(void *, void *));
extern void ArrayRemoveAt(struct DArrayImplementation *array, int n);
extern void ArrayDeleteAt(struct DArrayImplementation *array, int n);
extern void ArrayReplaceAt(struct DArrayImplementation *array, void *newElem, int n);
extern void ArraySort(struct DArrayImplementation *array, int (*comparator)(const void *, const void *));
extern int ArraySearch(struct DArrayImplementation *array, void *key, int (*comparator)(void *, void *), int fromIndex,
                       int isSorted);
extern void ArrayMapBackwards(struct DArrayImplementation *array, void (*fn)(void *, void *), void *clientData);
extern void *ArrayMapBackwards2(struct DArrayImplementation *array, int (*fn)(void *, void *), void *clientData);
extern void ArrayClear(struct DArrayImplementation *array);
extern int gti2AllocateBuffer(GTI2Buffer *buffer, int size);
extern int gti2GetBufferFreeSpace(const GTI2Buffer *p);
extern void gti2BufferWriteByte(GTI2Buffer *p, int v);
extern void gti2BufferWriteUShort(GTI2Buffer *p, int v);
extern void gti2BufferWriteData(GTI2Buffer *buffer, unsigned char *data, int len);
extern void gti2BufferShorten(GTI2Buffer *buffer, int start, int shortenBy);
extern int gti2VerifyChallenge(unsigned char *buffer);
extern unsigned char *gti2GetChallenge(unsigned char *buffer);
extern unsigned char *gti2GetResponse(unsigned char *buffer, unsigned char *challenge);
extern int gti2CheckResponse(unsigned char *p, unsigned char *q);
extern int gti2ResendMessage(GTI2Connection *c, GTI2OutgoingBufferMessage *message);
extern void *_gsi_memalign(unsigned long boundary, unsigned long size);
extern void gsiMemoryCallbacksSet(void *(*p_malloc)(unsigned long), void (*p_free)(void *),
                                  void *(*p_realloc)(void *, unsigned long),
                                  void *(*p_memalign)(unsigned long, unsigned long) );
extern void *gsimalloc(unsigned long size);
extern void *gsirealloc(void *ptr, unsigned long size);
extern void gsifree(void *p);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern void *MSL_C_LIB_MemsetPtr(void *dest, int c, u32 n);
extern u8 *memchr(u8 *s, u32 c, u32 n);
extern int memcmp(const void *buf1, const void *buf2, size_t n);
extern void __fill_mem(u8 *dest, u32 val, u32 count);
extern int gti2HandleClosed(GTI2Connection *c);
struct GTI2Socket;
struct GTI2Connection;
extern GTI2Connection *gti2SocketFindConnection(GTI2Socket *socket, u32 ip, u16 port);
extern int gti2CreateSocket(GTI2Socket **sock, char *localAddress, int outgoingBufferSize, int incomingBufferSize,
                            void (*callback)(GTI2Socket *), int type);
extern void gti2CloseSocket(GTI2Socket *socket);
extern void gti2SetConnectAttemptCallback(GTI2Socket *socket, GT2DumpCallback connectAttemptCallback);
extern void *gti2CreateConnectionObject(void);
extern int gti2NewSocketConnection(GTI2Socket *socket, GTI2Connection **connection, unsigned int ip, unsigned short port);
extern void gti2FreeSocketConnection(GTI2Connection *connection);
extern int gti2SocketSend(GTI2Socket *socket, unsigned int ip, unsigned short port, unsigned char *message, int len);
extern int gti2SocketConnectionsThink(GTI2Socket *socket);
extern void gti2FreeClosedConnections(GTI2Socket *socket);
extern void gti2SocketError(GTI2Socket *socket);
struct SOCSockAddr;
struct SOCHostEnt;
struct SOCInAddr;
extern int CheckRcode(int rcode, int fallback);
extern int socket(int pf, int type, int protocol);
extern int closesocket(int sock);
extern int closesocketsure(int sock, int *notInCloseSocket);
extern int shutdown(int sock, int how);
extern int bind(int sock, const struct SOCSockAddr *addr, int len);
extern int connect(int sock, const struct SOCSockAddr *addr, int len);
extern int recv(int sock, char *buffer, int len, int flags);
extern int recvfrom(int sock, char *buf, int len, int flags, struct SOCSockAddr *addr, int *fromlen);
extern int send(int sock, char *buffer, int bufferLen, int flags);
extern int sendto(int sock, char *buf, int len, int flags, struct SOCSockAddr *addr, int tolen);
extern int setsockopt(int s, int level, int optname, void *optval, int optlen);
extern int getsockname(int sock, struct SOCSockAddr *addr, int *len);
extern int inet_addr(char *addrString);
extern int GOAGetLastError(int sock);
extern int GSISocketSelect(int theSocket, int *theReadFlag, int *theWriteFlag, int *theExceptFlag);
extern int SetSockBlocking(int sock, int isblocking);
extern int SetReceiveBufferSize(int sock, int size);
extern int CanReceiveOnSocket(int sock);
extern int CanSendOnSocket(int sock);
extern struct SOCHostEnt *getlocalhost(void);
extern int IsPrivateIP(struct SOCInAddr *addr);
struct SOCSockAddr;
extern int gti2HandleConnectionReset(GTI2Socket *socket, unsigned int ip, unsigned short port);
extern int gti2HandleHostUnreachable(GTI2Socket *socket, unsigned int ip, unsigned short port, int send);
extern int func_0206e41c(GTI2Socket *socket, unsigned char *message, int len, unsigned int ip, unsigned short port);
extern void gti2UShortToBuffer(char *buffer, int pos, int s);
extern unsigned short gti2UShortFromBuffer(unsigned char *buffer, int pos);
extern s16 gti2SNDiff(unsigned short a, unsigned short b);
extern int gti2ConnectionError(GTI2Connection *connection, GT2Result result, GT2CloseReason reason);
extern int gti2ConnectionCommunicationError(GTI2Connection *connection);
extern int gti2ConnectionMemoryError(GTI2Connection *connection);
extern int gti2HandleESN(GTI2Connection *connection, unsigned short ESN);
extern int gti2HandleAppUnreliable(GTI2Connection *c, unsigned char *msg, int len);
extern int gti2HandleAppReliable(GTI2Connection *c, unsigned char *message, int len);
extern int gti2HandleClientChallenge(GTI2Connection *c, unsigned char *message, int len);
extern int gti2HandleServerChallenge(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2HandleClientResponse(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2HandleAccept(GTI2Connection *connection);
extern int gti2HandleReject(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2HandleClose(GTI2Connection *connection);
extern int gti2DeliverReliableMessage(GTI2Connection *connection, int type, unsigned char *message, int len);
extern int gti2IncomingBufferMessageCompare(void *elem1, void *elem2);
extern int gti2BufferIncomingMessage(GTI2Connection *connection, int type, unsigned short SN, unsigned char *message, int len,
                                     int *overflow);
extern void gti2RemoveHoldMessage(GTI2Connection *c, struct GTI2IncomingBufferMessage *message, int index);
extern int gti2DeliverHoldMessages(GTI2Connection *c);
extern void gti2SetPendingAck(GTI2Connection *connection);
extern int gti2HandleReliableMessage(GTI2Connection *connection, int type, unsigned char *message, int len);
extern int gti2HandleAck(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2HandleNack(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2HandlePing(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2HandlePong(GTI2Connection *c, unsigned char *message, int len);
extern int gti2HandleUnreliableMessage(GTI2Connection *c, int type, unsigned char *message, int len);
extern int gti2ReceiveMessages(GTI2Socket *socket);
extern int gti2SendAppReliable(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2SendClientChallenge(GTI2Connection *connection, char *challenge);
extern int gti2SendServerChallenge(GTI2Connection *c, char *response, char *challenge);
extern int gti2SendClientResponse(GTI2Connection *c, char *response, char *message, int len);
extern int gti2SendAccept(GTI2Connection *connection);
extern int gti2SendReject(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2SendClose(GTI2Connection *connection);
extern int gti2SendKeepAlive(GTI2Connection *connection);
extern int gti2SendAppUnreliable(GTI2Connection *connection, u8 *message, int len);
extern int gti2SendAck(GTI2Connection *connection);
extern int gti2SendNack(GTI2Connection *connection, unsigned short SNMin, unsigned short SNMax);
extern int gti2SendPong(GTI2Connection *connection, unsigned char *message, int len);
extern int gti2SendClosedOnSocket(GTI2Socket *sock, unsigned int ip, unsigned short port);
extern int gti2Send(GTI2Connection *a, unsigned char *b, int c, int d);
extern unsigned char gGti2TimeKey[];
extern unsigned char gGti2PacketMagic[];
unsigned short gti2UShortFromBuffer(unsigned char *buffer, int pos);
void gti2UShortToBuffer(char *p, int i, int v);
s16 gti2SNDiff(unsigned short a, unsigned short b);
int gti2ConnectionError(GTI2Connection *connection, GT2Result result, GT2CloseReason reason);
int gti2ConnectionCommunicationError(GTI2Connection *connection);
int gti2ConnectionMemoryError(GTI2Connection *connection);
int gti2HandleESN(GTI2Connection *connection, unsigned short ESN);
int gti2HandleAppUnreliable(GTI2Connection *c, unsigned char *msg, int len);
int gti2HandleAppReliable(GTI2Connection *c, unsigned char *message, int len);
int gti2HandleClientChallenge(GTI2Connection *c, unsigned char *message, int len);
int gti2HandleServerChallenge(GTI2Connection *connection, unsigned char *message, int len);
int gti2HandleClientResponse(GTI2Connection *connection, unsigned char *message, int len);
int gti2HandleAccept(GTI2Connection *connection);
int gti2HandleReject(GTI2Connection *connection, unsigned char *message, int len);
int gti2HandleClose(GTI2Connection *connection);
int gti2DeliverReliableMessage(GTI2Connection *connection, int type, unsigned char *message, int len);
int gti2IncomingBufferMessageCompare(void *elem1, void *elem2);
int gti2BufferIncomingMessage(GTI2Connection *connection, int type, unsigned short SN, unsigned char *message, int len,
                              int *overflow);
void gti2RemoveHoldMessage(GTI2Connection *c, struct GTI2IncomingBufferMessage *message, int index);
int gti2DeliverHoldMessages(GTI2Connection *c);
void gti2SetPendingAck(GTI2Connection *connection);
int gti2HandleReliableMessage(GTI2Connection *connection, int type, unsigned char *message, int len);
int gti2HandleAck(GTI2Connection *connection, unsigned char *message, int len);
int gti2HandleNack(GTI2Connection *connection, unsigned char *message, int len);
int gti2HandlePing(GTI2Connection *connection, unsigned char *message, int len);
int gti2HandlePong(GTI2Connection *c, unsigned char *message, int len);
GT2Bool gti2HandleClosed(GTI2Connection *connection);
int gti2HandleUnreliableMessage(GTI2Connection *c, int type, unsigned char *message, int len);
int func_0206e41c(GTI2Socket *socket, unsigned char *message, int len, unsigned int ip, unsigned short port);
int gti2HandleConnectionReset(GTI2Socket *socket, u32 ip, u16 port);
int gti2HandleHostUnreachable(GTI2Socket *sock, unsigned int ip, unsigned short port, int send);
int gti2ReceiveMessages(GTI2Socket *socket) {
    char buffer[1500];
    struct SOCSockAddrIn address;
    int addressLen;
    int rcode;

    if (CanReceiveOnSocket(socket->socket) != 0) {
        do {
            addressLen = 8;
            rcode      = recvfrom(socket->socket, buffer, 1500, 0, (struct SOCSockAddr *) (&address), &addressLen);
            if (rcode == -1) {
                int err = GOAGetLastError(socket->socket);
                if (err == -15) {
                    if (gti2HandleConnectionReset(
                            socket, address.addr,
                            ((unsigned short) ((((address.port) >> 8) & 0xff) | (((address.port) << 8) & 0xff00)))) != 0) {
                        continue;
                    }
                    return 0;
                } else if (err == -23) {
                    if (gti2HandleHostUnreachable(
                            socket, address.addr,
                            ((unsigned short) ((((address.port) >> 8) & 0xff) | (((address.port) << 8) & 0xff00))), 0) != 0) {
                        continue;
                    }
                    return 0;
                } else {
                    if (err == -35) {
                        continue;
                    }
                    gti2SocketError(socket);
                    return 0;
                }
            } else {
                if (func_0206e41c(socket, (unsigned char *) buffer, rcode, address.addr,
                                  ((unsigned short) ((((address.port) >> 8) & 0xff) | (((address.port) << 8) & 0xff00)))) ==
                    0) {
                    return 0;
                }
            }
        } while (CanReceiveOnSocket(socket->socket) != 0);
    }
    return 1;
}
int gti2StoreOutgoingReliableMessageInfo(GTI2Connection *connection, unsigned short SN, int len);
int gti2BeginReliableMessage(GTI2Connection *connection, int type, int len, int *overflow);
int gti2EndReliableMessage(GTI2Connection *connection);
int gti2SendAppReliable(GTI2Connection *connection, unsigned char *message, int len);
int gti2SendClientChallenge(GTI2Connection *connection, char *challenge);
int gti2SendServerChallenge(GTI2Connection *c, char *response, char *challenge);
int gti2SendClientResponse(GTI2Connection *c, char *response, char *message, int len);
int gti2SendAccept(GTI2Connection *connection);
int gti2SendReject(GTI2Connection *connection, unsigned char *message, int len);
int gti2SendClose(GTI2Connection *connection);
int gti2SendKeepAlive(GTI2Connection *connection);
int gti2SendAppUnreliable(GTI2Connection *connection, u8 *message, int len);
int gti2SendAck(GTI2Connection *connection);
int gti2SendNack(GTI2Connection *connection, unsigned short SNMin, unsigned short SNMax);
int gti2SendPong(GTI2Connection *connection, unsigned char *message, int len);
int gti2SendClosed(GTI2Connection *p);
int gti2SendClosedOnSocket(GTI2Socket *sock, unsigned int ip, unsigned short port);
int gti2ResendMessage(GTI2Connection *connection, GTI2OutgoingBufferMessage *message);
int gti2Send(GTI2Connection *a, unsigned char *b, int c, int d);
