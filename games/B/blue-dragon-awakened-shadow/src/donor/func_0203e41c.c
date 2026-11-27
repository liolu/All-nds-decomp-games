/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* make_ciphertext from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct SOCLCaInfo {
    char *dn;
    int modulo_len;
    unsigned char *modulo;
    int exponent_len;
    unsigned char *exponent;
} SOCLCaInfo;
typedef struct CPSPrivateKey {
    int size;
    unsigned char *p0;
    int l1;
    unsigned char *p1;
    int l2;
    unsigned char *p2;
    int l3;
    unsigned char *p3;
    int l4;
    unsigned char *p4;
    int l5;
    unsigned char *p5;
} CPSPrivateKey;
typedef struct CPSSha1Ctx {
    u32 state[5];
    u32 count[2];
    unsigned char buffer[64];
} CPSSha1Ctx;
typedef struct CPSMd5Ctx {
    u32 state[4];
    u32 count[2];
    unsigned char buffer[64];
} CPSMd5Ctx;
typedef struct CPSRc4Ctx {
    unsigned char x;
    unsigned char y;
    unsigned char m[256];
} CPSRc4Ctx;
typedef union CPSCipherCtx {
    CPSRc4Ctx rc4;
    unsigned char b[0x104];
} CPSCipherCtx;
typedef struct CPSSslConnection CPSSslConnection;
struct CPSSslConnection {
    unsigned char master_secret[48];
    unsigned char cache;
    unsigned char resumed;
    unsigned short method;
    unsigned char client_random[32];
    unsigned char server_random[32];
    union {
        unsigned char session_id[0x20];
        unsigned char key_block[72];
    } common1;
    unsigned char *send_mac;
    unsigned char *send_key;
    unsigned char *send_iv;
    CPSCipherCtx send_cipher;
    unsigned char send_seq[8];
    unsigned char *rcv_mac;
    unsigned char *rcv_key;
    unsigned char *rcv_iv;
    CPSCipherCtx rcv_cipher;
    unsigned char rcv_seq[8];
    CPSSha1Ctx sha1_hash;
    CPSSha1Ctx sha1_hash_tmp;
    CPSMd5Ctx md5_hash;
    CPSMd5Ctx md5_hash_tmp;
    unsigned char server;
    unsigned char state;
    unsigned char have_record;
    unsigned char pad457;
    int hash_type;
    int pubkeyAlgo;
    unsigned char *cert_start;
    unsigned char *cert_end;
    unsigned char hash[0x14];
    int hash_len;
    SOCLCaInfo ca;
    unsigned char modulus[0x100];
    int modlen;
    unsigned char pubexp[8];
    int pubexplen;
    unsigned char *sig;
    int sig_len;
    unsigned char subjectPhase;
    unsigned char keyInfoOid;
    unsigned char cnOid;
    unsigned char dateValid;
    char dn[0x100];
    unsigned char subjectDn[0x100];
    unsigned char commonName[0x50];
    char *hostName;
    unsigned char *certData;
    int certLen;
    int currentDate;
    int (*f810)(int result, CPSSslConnection *con, int level);
    SOCLCaInfo **rootCa;
    int rootCaNum;
    CPSPrivateKey *privkey;
    unsigned char pad820[4];
    unsigned char *buf;
    unsigned long end;
    unsigned long pos;
};
extern void CPSi_rc4_crypt(CPSRc4Ctx *ctx, unsigned char *data, int len);
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MD5Init(CPSMd5Ctx *ctx);
extern void MD5Update(CPSMd5Ctx *ctx, void *data0, int datalen);
extern void MD5Final(CPSMd5Ctx *ctx, unsigned char *digest);
extern void SHA1Init(CPSSha1Ctx *ctx);
extern void SHA1Update(CPSSha1Ctx *ctx, void *data0, int datalen);
extern void SHA1Final(CPSSha1Ctx *ctx, unsigned char *digest);
extern int func_0203e41c(CPSSslConnection *con, unsigned char *s);
void func_0203e1b0(u8 *d);
int func_0203e41c(CPSSslConnection *con, unsigned char *s) {
    void *p;
    int len;
    unsigned char tmp[48];
    unsigned char *mac;

    len = (s[3] << 8) + s[4];
    p   = s + 5;
    switch (con->method) {
        case 4: {
            CPSMd5Ctx *ctx = &con->md5_hash_tmp;
            MD5Init(ctx);
            MD5Update(ctx, con->send_mac, 16);
            MI_CpuFill8(tmp, 0x36, 48);
            MD5Update(ctx, tmp, 48);
            MD5Update(ctx, con->send_seq, 8);
            MD5Update(ctx, s, 1);
            MD5Update(ctx, s + 3, len + 2);
            mac = (unsigned char *) p + len;
            MD5Final(ctx, mac);
            MD5Init(ctx);
            MD5Update(ctx, con->send_mac, 16);
            MI_CpuFill8(tmp, 0x5c, 48);
            MD5Update(ctx, tmp, 48);
            MD5Update(ctx, mac, 16);
            MD5Final(ctx, mac);
            len += 16;
            break;
        }
        case 5: {
            CPSSha1Ctx *ctx = &con->sha1_hash_tmp;
            SHA1Init(ctx);
            SHA1Update(ctx, con->send_mac, 20);
            MI_CpuFill8(tmp, 0x36, 40);
            SHA1Update(ctx, tmp, 40);
            SHA1Update(ctx, con->send_seq, 8);
            SHA1Update(ctx, s, 1);
            SHA1Update(ctx, s + 3, len + 2);
            mac = (unsigned char *) p + len;
            SHA1Final(ctx, mac);
            SHA1Init(ctx);
            SHA1Update(ctx, con->send_mac, 20);
            MI_CpuFill8(tmp, 0x5c, 40);
            SHA1Update(ctx, tmp, 40);
            SHA1Update(ctx, mac, 20);
            SHA1Final(ctx, mac);
            len += 20;
            break;
        }
    }
    s[3] = len >> 8;
    s[4] = len;
    CPSi_rc4_crypt(&con->send_cipher.rc4, s + 5, len);
    func_0203e1b0(con->send_seq + 8);
    return len + 5;
}
