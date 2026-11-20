/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0205ad1c(s32, s32, s32);
s32 func_0205abd8(s32, s32);
s32 func_0205ce1c(s32, s32, s32, s32, s32 *);
void func_0205ad10(s32);
s32 func_0205cfc8(s32, s32, s32, s32, s32 *);
void func_0205acb8(s32, s32, s32, s32);
void func_0205b0c8(s32, s32);
void func_0205b0a0(s32, s32);
void func_0205b05c(s32, s32);

s32 func_0205d1f8(s32 a0, s32 a1, s32 a2, s32 a3, u8 *a4, s32 a5) {
    s32 seq;
    s32 heap;
    s32 v4;
    s32 v8;
    seq = func_0205ad1c(a0, a1, a3);
    if (seq == 0) {
        return 0;
    }
    heap = func_0205abd8(a1, seq);
    if (func_0205ce1c(a2, 6, heap, 0, &v8) != 0) {
        func_0205ad10(seq);
        return 0;
    }
    if (func_0205cfc8(a5, 1, heap, 0, &v4) != 0) {
        func_0205ad10(seq);
        return 0;
    }
    func_0205acb8(seq, v4 + *(s32 *) (v4 + 0x18), 0, v8);
    func_0205b0c8(a0, a4[6]);
    func_0205b0a0(a0, a4[7]);
    func_0205b05c(a0, a5);
    return 1;
}
