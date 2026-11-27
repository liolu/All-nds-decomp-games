/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* rcv_server_hello from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_ssl_hello.c (license: none), reused
 * by tools/donor_match.py */
typedef __typeof__(sizeof(0)) size_t;
extern int memcmp(const void *a, const void *b, size_t size);
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
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
extern void func_0203ca10(CpsSsl *ssl);
extern void func_0203d720(CpsSsl *ssl, u8 *message);
#pragma force_active on
void func_0203d720(CpsSsl *ssl, u8 *message) {
    int hadSession, idLength;
    MI_CpuCopy8(message + 2, ssl->serverRandom, 32);
    hadSession = ssl->hasSession;
    idLength   = message[34];
    message    = (u8 *) ((u32) message + 35);
    if (hadSession && idLength == 32 && !memcmp(ssl->sessionId, message, 32)) {
        ssl->resumed = 1;
    } else {
        if (hadSession) {
            func_0203ca10(ssl);
        }
        if (idLength) {
            MI_CpuCopy8(message, ssl->sessionId, 32);
            ssl->hasSession = 1;
        } else {
            ssl->hasSession = 0;
        }
        ssl->resumed = 0;
    }
    {
        u8 *cipherSuite  = message + idLength;
        ssl->cipherSuite = (cipherSuite[0] << 8) + cipherSuite[1];
    }
    ssl->state = 2;
}
