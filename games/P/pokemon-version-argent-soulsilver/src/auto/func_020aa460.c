/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* parse_record_in_buf from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_ssl_record.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern void func_020d4994(void *dest, u8 data, u32 size);
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
extern void (*data_021d4680)(void *ptr);
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
extern void func_020a92a4(CpsSsl *ssl, u8 *message);
extern void func_020a94c8(CpsSsl *ssl, u8 *message);
extern void func_020a9700(CpsSsl *ssl, u8 *message);
extern void func_020a9ca4(CpsSsl *ssl, u8 *message);
extern void func_020a9e98(CpsSsl *ssl, u8 *message);
extern int func_020a9f94(CpsSsl *ssl, u8 *record);
extern void func_020aa434(CpsSsl *ssl, const void *message, int length);
extern void func_020aa460(CpsSsl *ssl, u8 *record);
int func_020a9f94(CpsSsl *ssl, u8 *record);
void func_020aa434(CpsSsl *ssl, const void *message, int length);
void func_020aa460(CpsSsl *ssl, u8 *record) {
    int state = ssl->state, type;
    u8 *p;
    int length;
    if (state == 9) {
        data_021d4680(record);
        return;
    }
    length = (record[3] << 8) + record[4] + 5;
    type   = record[0];

    if (((u8) (state + 0x100 - 7) <= 1 && type != 21) || (type == 21 && (u32) length > 7)) {
        length = func_020a9f94(ssl, record);
        state  = ssl->state;
        if (state == 9) {
            data_021d4680(record);
            return;
        }
    }
    p = record + 5;
    length -= 5;
    switch (type) {
        case 20:
            if (!ssl->recvMacSecret) {
                ssl->state = 9;
            } else {
                func_020d4994(ssl->recvSequence, 0, 8);
                ssl->state = 7;
            }
            break;
        case 21:
            if (*p == 2) {
                ssl->state = 9;
            }
            break;
        case 22:
            do {
                int message = p[0];
                u32 size    = (p[1] << 16) + (p[2] << 8) + p[3];
                p += 4;
                switch (message) {
                    case 1:
                        if (ssl->isServer && state == 0) {
                            func_020a9700(ssl, p);
                        }
                        break;
                    case 16:
                        func_020a9ca4(ssl, p);
                        break;
                    case 2:
                        func_020a94c8(ssl, p);
                        break;
                    case 11:
                        func_020a92a4(ssl, p);
                        ssl->inSubject = 0;
                        break;
                    case 13:
                        ssl->inSubject = 1;
                        break;
                    case 14:
                        ssl->state = 4;
                        break;
                    case 20:
                        func_020a9e98(ssl, p);
                        break;
                    default:
                        ssl->state = 9;
                        break;
                }
                func_020aa434(ssl, p - 4, size + 4);
                p += size;
                length -= size + 4;
                if (!length) {
                    break;
                }
                state = ssl->state;
            } while (state != 9);
            break;
        case 23:
            ssl->record       = record;
            ssl->recordOffset = 5;
            ssl->recordSize   = length + 5;
            ssl->recordReady  = 1;
            return;
        default:
            ssl->state = 9;
            break;
    }
    data_021d4680(record);
}
