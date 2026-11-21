#include "m2c.h"

typedef struct Out {
    u8 pad0[8];
    s32 f8;
    u8 pad1[0xc];
    s32 f18;
    s32 f1c;
} Out;
typedef struct P {
    u8 pad[0x10c];
    s32 f10c;
    u8 n1[0x1f];
    u8 n2[0x15];
    u8 n3[0x33];
    u8 n4[0x1f];
    u8 pad2[0x42];
    s32 f1d8;
} P;
typedef struct Q {
    u8 pad[0x304];
    s32 f304;
} Q;
typedef struct Ctx {
    P *p;
} Ctx;

extern char data_ov000_022188b8[];
extern char data_ov000_022188cc[];
extern char data_ov000_022188e0[];

s32 func_ov000_02200ab8(Ctx *);
void func_ov000_0220a8b0(Ctx *, char *);
void func_ov000_0220a368(void *, void *, s32);
void func_ov000_021ff428(void *);
void *func_ov000_021ec3c8(s32);
void func_020e5b44(void *, s32, s32);
s32 func_ov000_0220659c(Ctx *, s32, void *, Out **, s32, s32, s32);
s32 func_ov000_02202e90(Ctx *, Out *);
void func_ov000_02206250(Ctx *, Out *);
void func_ov000_022042a4(Ctx *, s32);
s32 func_ov000_02200ef8(Ctx *, s32);

s32 func_ov000_02203204(Ctx *ctx, void *s1, void *s2, void *s3, void *a4, s8 *a5, s8 *a6, void *a7, s32 mode, s32 a9, s32 a10,
                        s32 a11, s32 a12) {
    P *p;
    u8 *q;
    Out *out;
    s32 r;

    p = ctx->p;
    if (p->f1d8 == 4) {
        r = func_ov000_02200ab8(ctx);
        if (r != 0) {
            return r;
        }
    }
    if (p->f1d8 != 0) {
        func_ov000_0220a8b0(ctx, data_ov000_022188b8);
        return 2;
    }
    switch (mode) {
        case 1:
            p->f10c = 1;
            break;
        case 0:
            p->f10c = 0;
            break;
        default:
            func_ov000_0220a8b0(ctx, data_ov000_022188cc);
            return 2;
    }
    p->f10c = 1;
    func_ov000_0220a368(p->n1, s1, 0x1f);
    func_ov000_0220a368(p->n2, s2, 0x15);
    func_ov000_0220a368(p->n3, s3, 0x33);
    func_ov000_0220a368(p->n4, a4, 0x1f);
    func_ov000_021ff428(p->n3);
    q = func_ov000_021ec3c8(0x308);
    if (q == 0) {
        func_ov000_0220a8b0(ctx, data_ov000_022188e0);
        return 1;
    }
    func_020e5b44(q, 0, 0x308);
    ((Q *) q)->f304 = a9;
    if (*a5 != 0 && *a6 != 0) {
        func_ov000_0220a368(q + 0xc2, a5, 0x100);
        func_ov000_0220a368(q + 0x1c2, a6, 0x100);
    }
    if (a7 != 0) {
        func_ov000_0220a368(q + 0x2c2, a7, 0x41);
    }
    r = func_ov000_0220659c(ctx, 0, q, &out, a10, a11, a12);
    if (r != 0) {
        return r;
    }
    r = func_ov000_02202e90(ctx, out);
    if (r != 0) {
        out->f1c = r;
        func_ov000_02206250(ctx, out);
        func_ov000_022042a4(ctx, 0);
        return r;
    }
    if (out->f8 != 0) {
        r = func_ov000_02200ef8(ctx, out->f18);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
