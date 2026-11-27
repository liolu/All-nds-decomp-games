#include "m2c.h"

s32 func_020d2370();
extern M2C_UNK data_021e1918;

s32 func_020d2bd0(u32 arg0) {
    switch (arg0) {
        case 0:
            return 0x226EC60;
        case 2:
            if ((M2C_FIELD(&data_021e1918, s32 *, 4) == 0) || ((func_020d2370() & 3) == 1)) {
                return 0;
            }
            return 0x023E0000;
        case 3:
            return 0x1FF8620;
        case 4:
            return 0x27E0080;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
        case 1:
            return 0;
    }
}
