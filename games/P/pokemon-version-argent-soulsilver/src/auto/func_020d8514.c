#include "m2c.h"

M2C_UNK func_020dc96c(u16);                         /* extern */
M2C_UNK func_020dc988(u16);                         /* extern */
extern s32 data_021e365c;

s32 func_020d8514(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020dc96c((u16) data_021e365c);
            return 0;
        case 10:
            func_020dc988((u16) data_021e365c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
