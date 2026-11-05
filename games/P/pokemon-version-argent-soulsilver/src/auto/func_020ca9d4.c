#include "m2c.h"

s32 func_020c85fc(s32, s32, s32);
s32 func_020c8764(s32, s32);
s32 func_020ca054(s32, s32, s32, s32, s32 *);
void func_020c8694(s32);
s32 func_020c9f70(s32, s32, s32, s32, s32 *);
void func_020c86a0(s32, s32, s32, s32);
void func_020c821c(s32, s32);
void func_020c825c(s32, s32);
void func_020c82fc(s32, s32);

s32 func_020ca9d4(s32 a0, s32 a1, s32 a2, s32 a3, u8 *a4, s32 a5) {
    s32 seq;
    s32 heap;
    s32 v4;
    s32 v8;
    seq = func_020c85fc(a0, a1, a3);
    if (seq == 0) {
        return 0;
    }
    heap = func_020c8764(a1, seq);
    if (func_020ca054(a2, 6, heap, 0, &v8) != 0) {
        func_020c8694(seq);
        return 0;
    }
    if (func_020c9f70(a5, 1, heap, 0, &v4) != 0) {
        func_020c8694(seq);
        return 0;
    }
    func_020c86a0(seq, v4 + *(s32 *) (v4 + 0x18), 0, v8);
    func_020c821c(a0, a4[6]);
    func_020c825c(a0, a4[7]);
    func_020c82fc(a0, a5);
    return 1;
}
