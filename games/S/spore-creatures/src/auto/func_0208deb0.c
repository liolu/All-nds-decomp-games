#include "m2c.h"

void func_0208deb0(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {                                 /* irregular */
        case 0:
            M2C_FIELD(arg0, u16 *, 0x18) = (u16) ((M2C_FIELD(arg0, u16 *, 0x18) & 0x3F00) | arg2);
            break;
        case 1:
            M2C_FIELD(arg0, u16 *, 0x18) = (u16) ((M2C_FIELD(arg0, u16 *, 0x18) & 0x3F) | (arg2 << 8));
            break;
    }
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) (M2C_FIELD(arg0, u8 *, 0x1C) | 8);
}
