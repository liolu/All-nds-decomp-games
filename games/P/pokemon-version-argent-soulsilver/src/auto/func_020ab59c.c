/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020749d4 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_020749d4.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u8 pad0[0x455];
    u8 state;
    u8 retained;
    u8 pad1[0x3cd];
    u8 *buffer;
    u32 total;
    u32 used;
} Context;
struct S0980 {
    u8 pad0[8];
    u8 f_8;
    u8 pad1[3];
    Context *ctx;
    u8 pad2[0x2c];
    int f_3c;
    int f_40;
    int f_44;
};
extern void func_020a6dbc(int arg0, struct S0980 *s);
extern int func_020a6cdc(int *out, void *arg1);
extern void func_020aa460(Context *ctx, u8 *buf);
extern void func_020d4a50(const void *src, void *dst, int n);
extern void *(*data_021d4654)(int);
void func_020ab59c(struct S0980 *s) {
    Context *ctx = s->ctx;
    int count;
    u8 *p;
    int complete;
    if (ctx->buffer == 0) {
        if ((u32) s->f_44 < 5) {
            return;
        }
        p     = (u8 *) func_020a6cdc(&count, s);
        count = (p[3] << 8) + p[4] + 5;
        if ((u32) count > 0x4805) {
            ctx->state = 9;
            return;
        }
        ctx->buffer = data_021d4654(count);
        if (ctx->buffer == 0) {
            ctx->state = 9;
            return;
        }
        ctx->total    = count;
        ctx->used     = 0;
        ctx->retained = 0;
    } else {
        if (s->f_44 == 0) {
            return;
        }
    }
    p = (u8 *) func_020a6cdc(&count, s);
    if ((u32) count >= ctx->total - ctx->used) {
        count    = ctx->total - ctx->used;
        complete = 1;
    } else {
        complete = 0;
    }
    func_020d4a50(p, ctx->buffer + ctx->used, count);
    func_020a6dbc(count, s);
    if (complete) {
        func_020aa460(ctx, ctx->buffer);
        if (ctx->retained == 0) {
            ctx->buffer = 0;
        }
    } else {
        ctx->used = ctx->used + count;
    }
}
