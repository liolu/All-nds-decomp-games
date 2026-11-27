#include "m2c.h"

s32 func_020b56d4();
extern M2C_UNK data_020f1bcc;

s32 func_020b5efc(u32 arg0) {
    switch (arg0) {
        case 0:
            return 0x2169FE0;
        case 2:
            if ((M2C_FIELD(&data_020f1bcc, s32 *, 4) == 0) || ((func_020b56d4() & 3) == 1)) {
                return 0;
            }
            return 0x023E0000;
        case 3:
            return 0x1FFE3E0;
        case 4:
            return 0x27E0640;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
        case 1:
            return 0;
    }
}
