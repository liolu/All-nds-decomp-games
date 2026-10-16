/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206e844(u16);                         /* extern */
M2C_UNK func_0206e864(u16);                         /* extern */
extern s32 data_020e827c;

s32 func_0206b640(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_0206e864((u16) data_020e827c);
            return 0;
        case 10:
            func_0206e844((u16) data_020e827c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
