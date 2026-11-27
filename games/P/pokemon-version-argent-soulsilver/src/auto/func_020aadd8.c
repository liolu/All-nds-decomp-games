/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* send_client_hello from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_ssl_handshake.c (license: none),
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
typedef struct CpsSslConfig {
    u16 cipherSuites[2];
    u32 handshakePriority;
} CpsSslConfig;
extern CpsSslConfig data_021106d0;
extern void func_020a862c(CpsSsl *ssl, u32 address, int port);
extern u32 func_020a8820(void);
extern void func_020aa434(CpsSsl *ssl, const void *message, int length);
extern void func_020aa880(u8 *out, int count);
extern void func_020aadd8(CpsSocket *socket);
void func_020aadd8(CpsSocket *socket) {
    CpsSsl *ssl = socket->ssl;
    u8 *packet, *p;
    u32 now, i;
    int length;
    packet = data_021d4654(152);
    if (!packet) {
        ssl->state = 9;
        return;
    }
    packet[9]            = 3;
    packet[10]           = 0;
    now                  = func_020a8820();
    ssl->clientRandom[0] = now >> 24;
    ssl->clientRandom[1] = now >> 16;
    ssl->clientRandom[2] = now >> 8;
    ssl->clientRandom[3] = now;
    func_020aa880(ssl->clientRandom + 4, 28);
    func_020d4a50(ssl->clientRandom, packet + 11, 32);
    func_020a862c(ssl, socket->remoteIp, socket->remotePort);
    if (ssl->hasSession) {
        packet[43] = 32;
        func_020d4a50(ssl->sessionId, packet + 44, 32);
        p = packet + 76;
    } else {
        packet[43] = 0;
        p          = packet + 44;
    }
    p[0] = 0;
    p[1] = 4;
    p += 2;
    for (i = 0; i < 2; i++) {
        p[0] = data_021106d0.cipherSuites[i] >> 8;
        p[1] = data_021106d0.cipherSuites[i];
        p += 2;
    }
    p[0]      = 1;
    p[1]      = 0;
    length    = (u32) (p + 2) - (u32) packet - 5;
    packet[0] = 22;
    packet[1] = 3;
    packet[2] = 0;
    packet[3] = length >> 8;
    packet[4] = length;
    packet[5] = 1;
    packet[6] = (length - 4) >> 16;
    packet[7] = (length - 4) >> 8;
    packet[8] = length - 4;
    func_020a6f84(packet, length + 5, ((void *) 0), 0, socket);
    func_020aa434(ssl, packet + 5, length);
    data_021d4680(packet);
}
