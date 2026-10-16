/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204b9ec(u16);                         /* extern */
M2C_UNK func_0204ba0c(u16);                         /* extern */
extern s32 data_020b1dbc;

s32 func_0204882c(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_0204ba0c((u16) data_020b1dbc);
            return 0;
        case 10:
            func_0204b9ec((u16) data_020b1dbc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
