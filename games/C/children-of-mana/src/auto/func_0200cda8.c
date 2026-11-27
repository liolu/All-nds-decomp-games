/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071be8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0207/func_02071be8.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct Ctx {
    int f0;
    int f4;
    char rest[0x18 - 8];
} Ctx;
typedef struct Src Src;
extern void func_0200df68(int handle, Ctx *ctx);
extern void _ZSt9terminatev(void);
extern void func_0200ca28(Src *s, Ctx *ctx);
extern int func_0200d1d4(Src *s, Ctx *ctx);
extern unsigned char *func_0200cefc(Src *s, Ctx *ctx, int *out);
extern unsigned char *_Z22__DecodeUnsignedNumberPcPm(unsigned char *p, int *out);
extern unsigned char *_Z20__DecodeSignedNumberPcPl(unsigned char *p, int *out);
extern void func_0200d328(Src *s, Ctx *ctx, unsigned char *p);
extern void func_0200ce8c(Src *s, int off, int add);
extern void func_0200c954(Src *s, Ctx *ctx, int n);
struct Src {
    int f0;
    char p4[8];
    int fc;
    int f10;
};
void func_0200cda8(struct Src *s) {
    int local0;
    Ctx ctx;
    volatile int blk[3];
    unsigned char *q;
    func_0200df68(s->f10, &ctx);
    if (ctx.f4 == 0) {
        _ZSt9terminatev();
    }
    func_0200ca28(s, &ctx);
    if (s->f0 != 0) {
        s->fc = 0;
    } else {
        s->fc = func_0200d1d4(s, &ctx);
    }
    q      = func_0200cefc(s, &ctx, &local0);
    blk[0] = q[1] | (q[2] << 8) | (q[3] << 16) | (q[4] << 24);
    _Z20__DecodeSignedNumberPcPl(_Z22__DecodeUnsignedNumberPcPm(q + 5, (int *) &blk[1]), (int *) &blk[2]);
    func_0200d328(s, &ctx, q);
    func_0200ce8c(s, blk[2], local0);
    func_0200c954(s, &ctx, ctx.f0 + blk[1]);
}
