/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071be8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0207/func_02071be8.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct Ctx {
    int f0;
    int f4;
    char rest[0x18 - 8];
} Ctx;
typedef struct Src Src;
extern void func_0206690c(int handle, Ctx *ctx);
extern void _ZSt9terminatev(void);
extern void func_020653c4(Src *s, Ctx *ctx);
extern int func_02065b74(Src *s, Ctx *ctx);
extern unsigned char *func_0206589c(Src *s, Ctx *ctx, int *out);
extern unsigned char *_Z22__DecodeUnsignedNumberPcPm(unsigned char *p, int *out);
extern unsigned char *_Z20__DecodeSignedNumberPcPl(unsigned char *p, int *out);
extern void func_02065cc8(Src *s, Ctx *ctx, unsigned char *p);
extern void func_0206582c(Src *s, int off, int add);
extern void func_020652f0(Src *s, Ctx *ctx, int n);
struct Src {
    int f0;
    char p4[8];
    int fc;
    int f10;
};
void func_02065748(struct Src *s) {
    int local0;
    Ctx ctx;
    volatile int blk[3];
    unsigned char *q;
    func_0206690c(s->f10, &ctx);
    if (ctx.f4 == 0) {
        _ZSt9terminatev();
    }
    func_020653c4(s, &ctx);
    if (s->f0 != 0) {
        s->fc = 0;
    } else {
        s->fc = func_02065b74(s, &ctx);
    }
    q      = func_0206589c(s, &ctx, &local0);
    blk[0] = q[1] | (q[2] << 8) | (q[3] << 16) | (q[4] << 24);
    _Z20__DecodeSignedNumberPcPl(_Z22__DecodeUnsignedNumberPcPm(q + 5, (int *) &blk[1]), (int *) &blk[2]);
    func_02065cc8(s, &ctx, q);
    func_0206582c(s, blk[2], local0);
    func_020652f0(s, &ctx, ctx.f0 + blk[1]);
}
