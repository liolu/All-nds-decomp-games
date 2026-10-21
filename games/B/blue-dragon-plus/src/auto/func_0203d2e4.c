#include "m2c.h"

M2C_UNK func_02040928(u16);                         /* extern */
M2C_UNK func_02040944(u16);                         /* extern */
extern s32 data_0215fa7c;

s32 func_0203d2e4(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_02040928((u16) data_0215fa7c);
            return 0;
        case 10:
            func_02040944((u16) data_0215fa7c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
