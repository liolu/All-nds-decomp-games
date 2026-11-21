#include "m2c.h"

s32 func_020e9848(u8 *, u8 *, s32);
void func_ov000_0220b4ac(u8 *, s32);
void func_ov000_0220b3c8(u8 *, s32);
void func_ov000_0220b33c(u8 *, s32);
void func_ov000_0220b28c(u8 *, s32);
extern u8 data_ov000_022199b0;
extern u8 data_ov000_022199bc;
extern u8 data_ov000_022199c8;
extern u8 data_ov000_022199d4;

void func_ov000_0220b544(u8 *a, s32 b) {
    a[b] = 0;
    if (func_020e9848(a, &data_ov000_022199b0, 8) == 0) {
        func_ov000_0220b28c(a, b);
        return;
    }
    if (func_020e9848(a, &data_ov000_022199bc, 9) == 0) {
        func_ov000_0220b33c(a, b);
        return;
    }
    if (func_020e9848(a, &data_ov000_022199bc, 9) == 0) {
        func_ov000_0220b33c(a, b);
        return;
    }
    if (func_020e9848(a, &data_ov000_022199c8, 8) == 0) {
        func_ov000_0220b3c8(a, b);
        return;
    }
    if (func_020e9848(a, &data_ov000_022199d4, 8) != 0) {
        return;
    }
    func_ov000_0220b4ac(a, b);
}
