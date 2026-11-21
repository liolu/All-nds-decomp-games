#include "m2c.h"

typedef struct Q {
    s32 a;
    s32 b;
} Q;
s32 func_020e9848(s32, void *, s32);
s32 func_ov000_02202aa4(s32, Q, s32 *, void *, s32);
void func_ov000_022029b0(s32, s32, s32);
void func_ov000_022066f0(s32, void *);
void func_ov000_0220a8b0(s32, void *);
void func_ov000_0220a88c(s32, s32, void *);
s32 func_ov000_0220a3e8(s32, s32, s32);
s32 *func_ov000_021ec3c8(s32);
extern u8 data_ov000_02219714[];
extern u8 data_ov000_0221971c[];
extern u8 data_ov000_0221974c[];

s32 func_ov000_0220a264(s32 arg0, u8 *arg1, s32 arg2) {
    Q q;
    s32 *p;
    s32 r;

    if (func_ov000_0220a3e8(arg0, arg2, 1) != 0) {
        return 4;
    }
    if (func_020e9848(arg2, data_ov000_02219714, 4) != 0) {
        func_ov000_0220a88c(arg0, 1, data_ov000_0221971c);
        func_ov000_022029b0(arg0, 3, 1);
        return 3;
    }
    q.a = *(s32 *) (arg1 + 0xC);
    q.b = *(s32 *) (arg1 + 0x10);
    if (q.a != 0) {
        p = func_ov000_021ec3c8(4);
        if (p == NULL) {
            func_ov000_0220a8b0(arg0, data_ov000_0221974c);
            return 1;
        }
        *p = 0;
        r  = func_ov000_02202aa4(arg0, q, p, arg1, 0);
        if (r != 0) {
            return r;
        }
    }
    func_ov000_022066f0(arg0, arg1);
    return 0;
}
