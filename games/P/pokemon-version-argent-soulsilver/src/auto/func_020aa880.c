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
extern OSIntrMode _Z20DisableIRQInterruptsv(void);
extern OSIntrMode _Z20SetIRQInterruptStatei(OSIntrMode state);
extern void func_020ac780(CPSSha1Ctx *ctx);
extern void func_020ac7d4(CPSSha1Ctx *ctx, void *data0, int datalen);
extern void func_020ac8f4(void *ctx, unsigned char *digest);
extern void func_020aa9b0(void *random_seed, unsigned long len);
extern void func_020aa880(unsigned char *d, int len);
extern Rand32Ctx data_021d46a8;
extern unsigned char data_021d5ff8[20];
extern unsigned char data_021d5e80;
void func_020aa880(unsigned char *d, int len) {
    unsigned long enabled;
    CPSSha1Ctx ctx;
    unsigned char x[20];
    int i;
    int j;
    int r;
    unsigned int carry;
    unsigned long tmp;

    if (data_021d5e80 == 0) {
        data_021d46a8.x = data_021d46a8.a * data_021d46a8.x + data_021d46a8.c;
        tmp             = (unsigned long) (data_021d46a8.x >> 32);
        func_020aa9b0(&tmp, 4);
    }
    r = 20;
    for (i = 0; i < len;) {
        if (r == 20) {
            func_020ac780(&ctx);
            enabled = _Z20DisableIRQInterruptsv();
            func_020ac7d4(&ctx, data_021d5ff8, 20);
            func_020ac8f4(&ctx, x);
            carry = 1;
            for (j = 19; j >= 0; j--) {
                tmp              = data_021d5ff8[j] + x[j] + carry;
                data_021d5ff8[j] = (unsigned char) tmp;
                carry            = tmp >> 8;
            }
            _Z20SetIRQInterruptStatei(enabled);
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
void func_020aa9b0(void *random_seed, unsigned long len);
