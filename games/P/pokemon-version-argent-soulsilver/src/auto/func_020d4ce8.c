#include "m2c.h"

void func_01ff8448(s32 a, s32 b, s32 c, s32 d);
void func_020d4394(s32 a, s32 b, s32 c, s32 d);
void func_020d4310(s32 a, s32 b);

void func_020d4ce8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020d4310(arg0, -1);
    func_020d4394(arg0, arg1, arg3, 0x01000000);
    if (arg3 == 0) {
        return;
    }
    while (*(volatile u32 *) (0x040000B0 + (arg0 * 3 + 2) * 4) & 0x80000000) {
    }
    func_01ff8448(arg0, arg1, arg2, 0xAF000001);
}
