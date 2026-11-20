#include "m2c.h"

M2C_UNK func_0200587c(u16);                         /* extern */
M2C_UNK func_020058ec(u16);                         /* extern */
extern M2C_UNK data_0203475c;

s32 func_0200a1a0(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_0200587c((u16) M2C_FIELD(&data_0203475c, s32 *, 4));
            return 0;
        case 10:
            func_020058ec((u16) M2C_FIELD(&data_0203475c, s32 *, 4));
            return 0;
        case 1:
            return 4;
        default:
            return 0x102;
    }
}
