#include "m2c.h"
typedef struct {
    u8 p0[0xc];
    s32 s;
    u8 p1[4];
    s32 f14;
    u8 p2[0xc];
    s32 f24;
} O;
extern s32 func_ov000_0220ce20(O *, s32);
extern void func_ov000_0220f3d0(O *);
s32 func_ov000_0220f63c(O **a, s32 *b) {
    O *o  = *a;
    s32 x = *b;
    if (o->s != 7) {
        if (func_ov000_0220ce20(o, x) == 0) {
            return 0;
        }
    }
    if (o->s == 7 && o->f14 == 0 && o->f24 == 0) {
        func_ov000_0220f3d0(o);
    }
    return 1;
}
