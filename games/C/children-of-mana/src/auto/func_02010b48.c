/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020014d8(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020fabd0;
extern M2C_UNK data_020fabd4;

s32 func_02010b48(s32 arg0, s32 arg1) {
    if (arg1 >= 3) {
        func_020014d8(&data_020fabd0, &data_020fabd4, 0, 0x127);
    }
    return arg0 + (arg1 * 4);
}
