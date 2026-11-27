/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* set_random from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long long u64;
typedef u32 OSIntrMode;
typedef struct CPSSha1Ctx {
    u32 state[5];
    u32 count[2];
    unsigned char buffer[64];
} CPSSha1Ctx;
typedef struct {
    u64 x;
    u64 a;
    u64 c;
} Rand32Ctx;
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
extern void SHA1Init(CPSSha1Ctx *ctx);
extern void SHA1Update(CPSSha1Ctx *ctx, void *data0, int datalen);
extern void SHA1FinalNoLength(void *ctx, unsigned char *digest);
extern void CPS_SslAddRandomSeed(void *random_seed, unsigned long len);
extern void func_0203ead8(unsigned char *d, int len);
extern Rand32Ctx data_0210ca84;
extern unsigned char sPool[20];
extern unsigned char sPoolSeeded;
void func_0203ead8(unsigned char *d, int len) {
    unsigned long enabled;
    CPSSha1Ctx ctx;
    unsigned char x[20];
    int i;
    int j;
    int r;
    unsigned int carry;
    unsigned long tmp;

    if (sPoolSeeded == 0) {
        data_0210ca84.x = data_0210ca84.a * data_0210ca84.x + data_0210ca84.c;
        tmp             = (unsigned long) (data_0210ca84.x >> 32);
        CPS_SslAddRandomSeed(&tmp, 4);
    }
    r = 20;
    for (i = 0; i < len;) {
        if (r == 20) {
            SHA1Init(&ctx);
            enabled = OS_DisableInterrupts();
            SHA1Update(&ctx, sPool, 20);
            SHA1FinalNoLength(&ctx, x);
            carry = 1;
            for (j = 19; j >= 0; j--) {
                tmp      = sPool[j] + x[j] + carry;
                sPool[j] = (unsigned char) tmp;
                carry    = tmp >> 8;
            }
            OS_RestoreInterrupts(enabled);
            r = 0;
        }
        {
            unsigned char b = x[r++];
            if (b != 0) {
                d[i++] = b;
            }
        }
    }
}
void CPS_SslAddRandomSeed(void *random_seed, unsigned long len);
