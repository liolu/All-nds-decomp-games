#include "m2c.h"

s32 func_0208bc94(s32, s32, s32);
s32 func_0208bdfc(s32, s32);
s32 func_0208d2c0(s32, s32, s32, s32, s32 *);
void func_0208bd2c(s32);
s32 func_0208d1dc(s32, s32, s32, s32, s32 *);
void func_0208bd38(s32, s32, s32, s32);
void func_0208b9cc(s32, s32);
void func_0208ba0c(s32, s32);
void func_0208ba2c(s32, s32);

s32 func_0208dc18(s32 a0, s32 a1, s32 a2, s32 a3, u8 *a4, s32 a5) {
    s32 seq;
    s32 heap;
    s32 v4;
    s32 v8;
    seq = func_0208bc94(a0, a1, a3);
    if (seq == 0) {
        return 0;
    }
    heap = func_0208bdfc(a1, seq);
    if (func_0208d2c0(a2, 6, heap, 0, &v8) != 0) {
        func_0208bd2c(seq);
        return 0;
    }
    if (func_0208d1dc(a5, 1, heap, 0, &v4) != 0) {
        func_0208bd2c(seq);
        return 0;
    }
    func_0208bd38(seq, v4 + *(s32 *) (v4 + 0x18), 0, v8);
    func_0208b9cc(a0, a4[6]);
    func_0208ba0c(a0, a4[7]);
    func_0208ba2c(a0, a5);
    return 1;
}
