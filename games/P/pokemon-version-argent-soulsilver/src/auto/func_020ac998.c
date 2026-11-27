/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ac998 from https://github.com/Project-Holon/aletheia src/game/ov009/arc4.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef struct CPSRc4Ctx {
    unsigned char x;
    unsigned char y;
    unsigned char m[256];
} CPSRc4Ctx;
extern void func_020ac998(CPSRc4Ctx *ctx, unsigned char *data, int len);
void func_020ac998(CPSRc4Ctx *ctx, unsigned char *data, int len) {
    int i;
    unsigned char x;
    unsigned char y;
    unsigned char *m;
    unsigned char m_x;
    unsigned char m_y;

    m = ctx->m;
    x = ctx->x;
    y = ctx->y;
    for (i = 0; i < len; i++) {
        x    = x + 1;
        m_x  = m[x];
        y    = y + m_x;
        m_y  = m[y];
        m[x] = m_y;
        m[y] = m_x;
        data[i] ^= m[(unsigned char) (m_x + m_y)];
    }
    ctx->x = x;
    ctx->y = y;
}
