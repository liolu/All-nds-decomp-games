#include "m2c.h"

extern u8 data_020f39cc;
s32 func_020bc480(s32 a);
s32 func_020bc42c(s32 a, s32 b, s32 c);

s32 func_020bc8d8(s32 mode, s32 led, s32 force, s32 sync) {
    switch (mode) {
        case 1:
            if (force == 0) {
                if ((u32) (*(u32 *) 0x027FFC3C - *(u32 *) (&data_020f39cc + 0x10)) <= 7) {
                    return 0;
                }
            }
            if (led != 0) {
                if (sync != 0) {
                    func_020bc480(led);
                } else {
                    func_020bc42c(led, 0, 0);
                }
            }
            *(volatile u16 *) 0x04000304 |= 1;
            break;
        case 0:
            *(volatile u16 *) 0x04000304 &= ~1;
            *(u32 *) (&data_020f39cc + 0x10) = *(u32 *) 0x027FFC3C;
            if (led != 0) {
                if (sync != 0) {
                    func_020bc480(led);
                } else {
                    func_020bc42c(led, 0, 0);
                }
            }
            break;
    }
    return 1;
}
