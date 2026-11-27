#include "m2c.h"

void func_0208df18(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    switch (arg1) {                                 /* irregular */
        case 1:
            M2C_FIELD(arg0, s16 *, 0x12) = arg2;
            M2C_FIELD(arg0, s16 *, 0x16) = arg3;
            break;
        case 0:
            M2C_FIELD(arg0, s16 *, 0x10) = arg2;
            M2C_FIELD(arg0, s16 *, 0x14) = arg3;
            break;
    }
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) (M2C_FIELD(arg0, u8 *, 0x1C) | 8);
}
