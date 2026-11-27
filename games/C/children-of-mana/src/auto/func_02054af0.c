/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020509d4(u16);                         /* extern */
M2C_UNK func_020509f4(u16);                         /* extern */
extern s32 data_0211aed4;

s32 func_02054af0(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020509f4((u16) data_0211aed4);
            return 0;
        case 10:
            func_020509d4((u16) data_0211aed4);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
