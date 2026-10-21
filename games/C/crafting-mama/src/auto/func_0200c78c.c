#include "m2c.h"

M2C_UNK func_02024e00(u16);                         /* extern */
M2C_UNK func_02024e70(u16);                         /* extern */
extern M2C_UNK data_02093e60;

s32 func_0200c78c(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_02024e00((u16) M2C_FIELD(&data_02093e60, s32 *, 4));
            return 0;
        case 10:
            func_02024e70((u16) M2C_FIELD(&data_02093e60, s32 *, 4));
            return 0;
        case 1:
            return 4;
        default:
            return 0x102;
    }
}
