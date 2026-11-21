#include "m2c.h"
s32 func_ov000_021f46c4(void *, u8 *, s32);
u32 func_020eb6cc(void *, void *, s32);
void func_ov000_021f4760(s32, s32, s32, s32, u32 *, s32);
void func_ov000_021f2e60(s32 unused, s32 b, u8 *p) {
    u8 buf[16];
    u32 arr[0x80];
    s32 i = 0;
    do {
        if (func_ov000_021f46c4(buf, p + 1, i) == -1) {
            break;
        }
        arr[i] = func_020eb6cc(buf, 0, 10);
        i++;
    } while (i < 0x80);
    func_ov000_021f4760(*p, b, 0, 0, arr, i);
}
