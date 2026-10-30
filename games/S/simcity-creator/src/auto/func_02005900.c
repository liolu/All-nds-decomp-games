#include "m2c.h"

s32 func_02005154();
extern M2C_UNK data_020d0ebc;

s32 func_02005900(u32 arg0) {
    switch (arg0) {
        case 0:
            return 0x2180800;
        case 2:
            if ((M2C_FIELD(&data_020d0ebc, s32 *, 4) == 0) || ((func_02005154() & 3) == 1)) {
                return 0;
            }
            return 0x023E0000;
        case 3:
            return 0x1FF9760;
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
