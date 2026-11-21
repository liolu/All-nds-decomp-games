#include "m2c.h"
typedef struct {
    u8 v;
    u8 pad[3];
} W4;
typedef struct {
    u8 b[0xC0];
} B192;
typedef struct {
    u8 pad0[0x444];
    W4 w[11];
    B192 e[11];
    s64 f;
    u8 pad2[0x53];
    u8 d0b;
    u8 pad3[7];
    u8 d13;
    u8 d14;
    u8 d15;
} P;
s32 func_020ae420(P *);
s32 func_ov000_021fbaec(P *);
s32 func_ov000_021fbb08(P *);
void func_020adef0(void *, void *, s32);
s64 func_020d34b0(void);
s32 func_ov000_021fb814(P *p) {
    B192 *e;
    s32 a;
    s32 s;
    s = func_020ae420(p);
    e = &p->e[p->d13];
    if (s == 3) {
        a      = func_ov000_021fbaec(p);
        p->d15 = p->d15 + 1;
        if (p->d15 > 3) {
            p->d15         = 0;
            p->w[p->d13].v = 1;
            return 9;
        }
        if (p->d15 != 1) {
            if (p->d14 == 1) {
                p->d0b &= ~0xC;
            } else if (p->d14 == 2) {
                p->d15         = 0;
                p->w[p->d13].v = 3;
                return 9;
            } else if (p->d14 == 3) {
                p->d15         = 0;
                p->w[p->d13].v = 4;
                return 9;
            } else if (p->d15 == 3) {
                p->d0b &= ~0xC;
            }
        }
        func_020adef0(e, p->pad2, a | func_ov000_021fbb08(p));
    } else if (s == 9) {
        p->d15 = 0;
        p->f   = func_020d34b0();
        return 10;
    }
    return 8;
}
