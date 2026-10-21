#include "m2c.h"

M2C_UNK func_0200ec84(u16);                         /* extern */
M2C_UNK func_0200eca0(u16);                         /* extern */
extern s32 data_0214987c;

s32 func_0200ac90(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_0200ec84((u16) data_0214987c);
            return 0;
        case 10:
            func_0200eca0((u16) data_0214987c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
