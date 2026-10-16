#include "m2c.h"

M2C_UNK func_020bdba4(u16);                         /* extern */
M2C_UNK func_020bdbc0(u16);                         /* extern */
extern s32 data_020f391c;

s32 func_020bad40(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020bdba4((u16) data_020f391c);
            return 0;
        case 10:
            func_020bdbc0((u16) data_020f391c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
