#include "m2c.h"

M2C_UNK func_0206a988(u16);                         /* extern */
M2C_UNK func_0206a9a4(u16);                         /* extern */
extern s32 data_0209057c;

s32 func_020682d8(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_0206a988((u16) data_0209057c);
            return 0;
        case 10:
            func_0206a9a4((u16) data_0209057c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
