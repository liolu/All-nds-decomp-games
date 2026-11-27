/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02075840 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02075840.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char pad[0x454];
    unsigned char f_454;
    unsigned char f_455;
} Ctx;
extern unsigned char *func_020a6cdc(int *out, void *conn);
extern void func_020a6dbc(int x, void *conn);
extern void *(*data_021d4654)(int);
extern void (*data_021d4680)(void *);
extern int func_020aa3c8(void *a, int b, void *conn);
extern void func_020a9638(void *ctx, void *p);
extern void func_020aa434(void *ctx, void *a, int b);
extern void func_020aa460(void *ctx, void *a);
int func_020aa6e0(void *param0) {
    Ctx *ctx = *(Ctx **) ((char *) param0 + 0xc);
    unsigned int buf;
    unsigned char *p;
    void *r6;

    for (;;) {
        p = func_020a6cdc((int *) &buf, param0);
        if (buf == 0) {
            ctx->f_455 = 9;
            return 9;
        }
        if (buf >= 5) {
            break;
        }
    }

    if (p[0] == 0x80) {
        if (ctx->f_454 == 0) {
            goto err9;
        }
        if (ctx->f_455 != 0) {
            goto err9;
        }
        buf = p[1];
        func_020a6dbc(2, param0);
        r6 = data_021d4654(buf);
        if (r6 == 0) {
            ctx->f_455 = 9;
            return 9;
        }
        if (func_020aa3c8(r6, buf, param0) == 0 && *(unsigned char *) r6 == 1) {
            func_020a9638(ctx, (char *) r6 + 1);
        } else {
            ctx->f_455 = 9;
        }
        func_020aa434(ctx, r6, buf);
        data_021d4680(r6);
        goto final;

    err9:
        ctx->f_455 = 9;
        goto final;
    } else {
        buf = (p[3] << 8) + p[4] + 5;
        if (buf > 0x4805) {
            ctx->f_455 = 9;
            return 9;
        }
        r6 = data_021d4654(buf);
        if (r6 == 0) {
            ctx->f_455 = 9;
            return 9;
        }
        if (func_020aa3c8(r6, buf, param0) != 0) {
            data_021d4680(r6);
            ctx->f_455 = 9;
            return 9;
        }
        func_020aa460(ctx, r6);
    }
final:
    return ctx->f_455;
}
