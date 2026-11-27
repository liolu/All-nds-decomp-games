/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02075840 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02075840.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char pad[0x454];
    unsigned char f_454;
    unsigned char f_455;
} Ctx;
extern unsigned char *CPSi_TcpReadRaw(int *out, void *conn);
extern void CPSi_SocConsumeRaw(int x, void *conn);
extern void *(*data_0210ca30)(int);
extern void (*CPSiFree)(void *);
extern int func_0203e620(void *a, int b, void *conn);
extern void func_0203d890(void *ctx, void *p);
extern void SSLi_UpdateHandshakeHash(void *ctx, void *a, int b);
extern void func_0203e6b8(void *ctx, void *a);
int func_0203e938(void *param0) {
    Ctx *ctx = *(Ctx **) ((char *) param0 + 0xc);
    unsigned int buf;
    unsigned char *p;
    void *r6;

    for (;;) {
        p = CPSi_TcpReadRaw((int *) &buf, param0);
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
        CPSi_SocConsumeRaw(2, param0);
        r6 = data_0210ca30(buf);
        if (r6 == 0) {
            ctx->f_455 = 9;
            return 9;
        }
        if (func_0203e620(r6, buf, param0) == 0 && *(unsigned char *) r6 == 1) {
            func_0203d890(ctx, (char *) r6 + 1);
        } else {
            ctx->f_455 = 9;
        }
        SSLi_UpdateHandshakeHash(ctx, r6, buf);
        CPSiFree(r6);
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
        r6 = data_0210ca30(buf);
        if (r6 == 0) {
            ctx->f_455 = 9;
            return 9;
        }
        if (func_0203e620(r6, buf, param0) != 0) {
            CPSiFree(r6);
            ctx->f_455 = 9;
            return 9;
        }
        func_0203e6b8(ctx, r6);
    }
final:
    return ctx->f_455;
}
