/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* send_server_hello from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_ssl_handshake.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;

    u32 sp_svc;

    CPContext cp_context;

} OSContext;
typedef struct OSiAlarm OSAlarm;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor)(void *);
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;

    OSThreadQueue *queue;
    OSThreadLink link;

    OSMutex *mutex;
    OSMutexQueue mutexQueue;

    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;

    OSThreadQueue joinQueue;

    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;

    u32 systemErrno;
};
extern void func_020d4a50(const void *src, void *dst, u32 size);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
typedef struct CpsMd5Context {
    u32 state[4];
    u32 countLo;
    u32 countHi;
    u8 buffer[64];
} CpsMd5Context;
typedef struct CpsSha1Context {
    u32 state[5];
    u32 countHi;
    u32 countLo;
    u8 buffer[64];
} CpsSha1Context;
typedef struct CpsRc4Context {
    u8 x;
    u8 y;
    u8 s[256];
} CpsRc4Context;
extern void *(*data_021d4654)(u32 size);
extern void (*data_021d4680)(void *ptr);
typedef struct CpsSocketBuffer {
    s32 size;
    u8 *data;
} CpsSocketBuffer;
typedef struct CpsSocket {
    OSThread *thread;
    u32 waiting;
    u8 state;
    u8 sslEnabled;
    u16 localPort;
    void *ssl;
    s32 tick;
    u32 localIp;
    u16 remotePort;
    u16 boundRemotePort;
    u32 remoteIp;
    u32 boundRemoteIp;
    u32 recvNext;
    u32 sendNext;
    u16 sendWindow;
    u16 mss;
    u32 sendAcked;
    u32 recvSegments;
    int (*udpCallback)(u8 *data, u32 length, struct CpsSocket *socket);
    CpsSocketBuffer recvBuf;
    s32 recvLength;
    CpsSocketBuffer sendBuf;
    CpsSocketBuffer unk_50;
    CpsSocketBuffer writeBuf;
    u32 writeLength;
} CpsSocket;
typedef struct CpsSslRandomState {
    u8 seeded;
    u32 sessionCount;
} CpsSslRandomState;
extern CpsSslRandomState data_021d5e80;
extern u32 func_020a6f84(const u8 *data, u32 length, const u8 *data2, u32 length2, CpsSocket *socket);
typedef struct CpsRootCa {
    const char *name;
    int modulusLength;
    u8 *modulus;
    int exponentLength;
    u8 *exponent;
} CpsRootCa;
typedef struct CpsRsaPrivateKey {
    int length;
    u8 *modulus;
    int prime1Length;
    u8 *prime1;
    int prime2Length;
    u8 *prime2;
    int exponent1Length;
    u8 *exponent1;
    int exponent2Length;
    u8 *exponent2;
    int coefficientLength;
    u8 *coefficient;
} CpsRsaPrivateKey;
typedef struct CpsSslCertificate {
    int length;
    u8 *bytes;
} CpsSslCertificate;
typedef struct CpsSsl {
    u8 masterSecret[48];
    u8 hasSession;
    u8 resumed;
    u16 cipherSuite;
    u8 clientRandom[32];
    u8 serverRandom[32];

    union {
        u8 sessionId[32];
        u8 keyBlock[72];
    };

    u8 *sendMacSecret;
    u8 *sendKey;
    u8 unk_0C4[4];
    CpsRc4Context sendRc4;
    u8 unk_1CA[2];
    u8 sendSequence[8];
    u8 *recvMacSecret;
    u8 *recvKey;
    u8 unk_1DC[4];
    CpsRc4Context recvRc4;
    u8 unk_2E2[2];
    u8 recvSequence[8];
    CpsSha1Context handshakeSha1;
    CpsSha1Context sha1;
    CpsMd5Context handshakeMd5;
    CpsMd5Context md5;
    u8 isServer;
    u8 state;
    u8 recordReady;

    int signatureType;
    int keyType;
    u8 *tbsBegin;
    u8 *tbsEnd;
    u8 digest[20];
    int digestLength;
    CpsRootCa issuerKey;
    u8 modulus[256];
    u32 modulusLength;
    u8 exponent[8];
    int exponentLength;
    u8 *signature;
    int signatureLength;
    u8 inSubject;
    u8 keyEncoding;
    u8 nameType;
    u8 validNow;
    char issuer[256];
    char subject[256];
    char commonName[80];
    char *serverName;
    u8 *certificate;
    u32 certificateLength;
    u32 today;
    u32 (*authCallback)(u32 result, struct CpsSsl *ssl, int index);
    CpsRootCa **rootCas;
    int rootCaCount;
    CpsRsaPrivateKey *serverKey;
    CpsSslCertificate *serverCertificate;
    u8 *record;
    u32 recordSize;
    u32 recordOffset;
} CpsSsl;
extern u32 func_020a8820(void);
extern void func_020aa434(CpsSsl *ssl, const void *message, int length);
extern void func_020aa880(u8 *out, int count);
extern int func_020aaa20(CpsSocket *socket);
#pragma force_active on
int func_020aaa20(CpsSocket *socket) {
    CpsSsl *ssl = socket->ssl;
    u8 *buffer, *cursor;
    CpsSslCertificate *certificate = ssl->serverCertificate;
    int length                     = certificate ? certificate->length : 0;
    u32 time                       = func_020a8820();
    ssl->serverRandom[0]           = time >> 24;
    ssl->serverRandom[1]           = time >> 16;
    ssl->serverRandom[2]           = time >> 8;
    ssl->serverRandom[3]           = time;
    func_020aa880(ssl->serverRandom + 4, 28);
    buffer = data_021d4654(length + 157);
    if (!buffer) {
        ssl->state = 9;
        return 1;
    }
    buffer[5]  = 2;
    buffer[6]  = 0;
    buffer[7]  = 0;
    buffer[8]  = 70;
    buffer[9]  = 3;
    buffer[10] = 0;
    func_020d4a50(ssl->serverRandom, buffer + 11, 32);
    buffer[43] = 32;
    if (ssl->hasSession) {
        func_020d4a50(ssl->sessionId, buffer + 44, 32);
        ssl->resumed = 1;
        cursor       = buffer + 76;
    } else {

        u32 count;
        func_020aa880(buffer + 44, 28);
        cursor     = buffer + 76;
        count      = data_021d5e80.sessionCount;
        buffer[72] = count >> 24;
        buffer[73] = count >> 16;
        buffer[74] = count >> 8;
        buffer[75] = count;
        func_020d4a50(cursor - 32, ssl->sessionId, 32);
        count                      = data_021d5e80.sessionCount;
        ssl->resumed               = 0;
        data_021d5e80.sessionCount = count + 1;
    }
    cursor[0] = ssl->cipherSuite >> 8;
    cursor[1] = ssl->cipherSuite;
    cursor[2] = 0;
    cursor += 3;
    if (!ssl->resumed) {
        if (length) {
            int messageLength = length + 6;
            int chainLength   = length + 3;
            cursor[0]         = 11;
            cursor[1]         = messageLength >> 16;
            cursor[2]         = messageLength >> 8;
            cursor[3]         = messageLength;
            cursor[4]         = chainLength >> 16;
            cursor[5]         = chainLength >> 8;
            cursor[6]         = chainLength;
            cursor[7]         = length >> 16;
            cursor[8]         = length >> 8;
            cursor[9]         = length;
            cursor += 10;
            func_020d4a50(certificate->bytes, cursor, length);
            cursor += length;
        }
        cursor[0] = 14;
        cursor[1] = 0;
        cursor[2] = 0;
        cursor[3] = 0;
        cursor += 4;
    }
    length    = cursor - buffer - 5;
    buffer[0] = 22;
    buffer[1] = 3;
    buffer[2] = 0;
    buffer[3] = length >> 8;
    buffer[4] = length;
    func_020aa434(ssl, buffer + 5, length);
    func_020a6f84(buffer, length + 5, ((void *) 0), 0, socket);
    data_021d4680(buffer);
    return ssl->resumed;
}
