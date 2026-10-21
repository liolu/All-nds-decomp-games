/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cf58c(u16);                         /* extern */
M2C_UNK func_020cf5ac(u16);                         /* extern */
extern s32 data_020f88dc;

s32 func_020cc0c4(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020cf5ac((u16) data_020f88dc);
            return 0;
        case 10:
            func_020cf58c((u16) data_020f88dc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
