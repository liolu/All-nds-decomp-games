#include "m2c.h"

typedef struct Sess {
    u8 pad[0xc];
    s32 kind;
} Sess;

typedef struct Ctx {
    u8 pad[0x20];
    s32 f20;
    u8 pad2[8];
    s32 f2c;
} Ctx;

extern u8 data_ov000_02219cd4[];
Sess *func_ov000_0220ef0c(Ctx *, s32, s32);
s32 func_ov000_0220c880(Ctx *, Sess *, s32, s32, s32, u8 *, s32, s32);
s32 func_020e5bb0(const void *, const void *, s32);
s32 func_ov000_0220c9a4(Ctx *, s32, s32, u8 *, s32, s32 *);
s32 func_ov000_0220edd4(Ctx *, s32, s32);
s32 func_ov000_0220cacc(Ctx *, Sess **, s32, s32);
s32 func_ov000_0220edb8(Sess *);
s32 func_ov000_0220d54c(Sess *, u8 *, s32);
s32 func_ov000_0220d410(Sess *);
s32 func_ov000_0220ddfc(Sess *, s32, u8 *, s32);
s32 func_ov000_0220e148(Sess *, s32, u8 *, s32);

s32 func_ov000_0220e200(Ctx *c, u8 *buf, s32 len, s32 a, s32 b) {
    Sess *sess;
    s32 flag;
    Sess *s2;
    s32 tmp;
    s32 r;
    s32 c0;
    sess = func_ov000_0220ef0c(c, a, b);
    if (c->f2c != 0) {
        if (func_ov000_0220c880(c, sess, a, b, 0, buf, len, 0) == 0) {
            return 0;
        }
    }
    if (len > 2 && func_020e5bb0(buf, data_ov000_02219cd4, 2) == 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (sess == 0) {
        if (func_ov000_0220c9a4(c, a, b, buf, len, &tmp) == 0) {
            return 0;
        }
        if (tmp != 0) {
            return 1;
        }
        if (flag == 0 || buf[2] != 1) {
            if (flag == 0 || buf[2] != 0x68) {
                if (func_ov000_0220edd4(c, a, b) == 0) {
                    return 0;
                }
            }
            return 1;
        } else {
            if (c->f20 == 0) {
                return 1;
            }
            r = func_ov000_0220cacc(c, &sess, a, b);
            if (r != 0) {
                if (r != 5) {
                    if (func_ov000_0220edd4(c, a, b) == 0) {
                        return 0;
                    }
                }
                return 1;
            }
        }
    }
    s2 = sess;
    if (s2->kind == 7) {
        if (flag == 0 || buf[2] != 0x68) {
            if (func_ov000_0220edb8(s2) == 0) {
                return 0;
            }
        }
        return 1;
    }
    if (flag != 0 && len >= 4) {
        if (func_020e5bb0(buf + 2, data_ov000_02219cd4, 2) == 0) {
            buf += 2;
            len -= 2;
            flag = 0;
        }
    }
    if (flag == 0) {
        return func_ov000_0220d54c(s2, buf, len) != 0;
    }
    c0 = buf[2];
    if (c0 < 0) {
        return func_ov000_0220d410(s2) != 0;
    }
    if (c0 < 8) {
        return func_ov000_0220ddfc(s2, c0, buf, len) != 0;
    }
    return func_ov000_0220e148(s2, c0, buf, len) != 0;
}
