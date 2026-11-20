#include "m2c.h"

M2C_UNK func_0200d69c(u16);                         /* extern */
M2C_UNK func_0200d6b8(u16);                         /* extern */
extern s32 data_020d2bdc;

s32 func_0200a164(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_0200d69c((u16) data_020d2bdc);
            return 0;
        case 10:
            func_0200d6b8((u16) data_020d2bdc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
