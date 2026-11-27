/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;

void func_020c3f24(void *);
void func_020c3dc8(void *, void *, int);
void func_020c3bbc(void *, void *);

void func_020c3a30(void *out, void *msg, int msglen, u8 *key, int keylen) {
    u8 ipad[0x40];
    u8 opad[0x40];
    u8 digest[0x14];
    u8 ctx[0x68];
    u8 *dg;
    u8 *p;
    u8 *q;
    u8 *r;
    int i;

    dg = digest;
    if (out == 0) {
        return;
    }
    if (msg == 0) {
        return;
    }
    if (msglen == 0) {
        return;
    }
    if (key == 0) {
        return;
    }
    if (keylen == 0) {
        return;
    }
    if (keylen > 0x40) {
        func_020c3f24(ctx);
        func_020c3dc8(ctx, key, keylen);
        func_020c3bbc(ctx, dg);
        keylen = 0x14;
        key    = dg;
    }
    i = 0;
    if (keylen > 0) {
        p = ipad;
        q = opad;
        do {
            i++;
            *p   = *key ^ 0x36;
            *q++ = *key++ ^ 0x5c;
            p++;
        } while (i < keylen);
    }
    if (i < 0x40) {
        r = ipad + i;
        q = opad + i;
        do {
            *r = 0x36;
            i++;
            *q = 0x5c;
            r++;
            q++;
        } while (i < 0x40);
    }
    func_020c3f24(ctx);
    func_020c3dc8(ctx, ipad, 0x40);
    func_020c3dc8(ctx, msg, msglen);
    func_020c3bbc(ctx, dg);
    func_020c3f24(ctx);
    func_020c3dc8(ctx, opad, 0x40);
    func_020c3dc8(ctx, dg, 0x14);
    func_020c3bbc(ctx, out);
}
