/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

s32 func_02044830();                                /* extern */
extern M2C_UNK data_020dafa0;

s32 func_020447c4(void) {
    M2C_FIELD(&data_020dafa0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020dafa0, s32 *, 0x34) = 0;
    M2C_FIELD(&data_020dafa0, s32 *, 0x18) = 0;
    M2C_FIELD(&data_020dafa0, s16 *, 2)    = 0;
    M2C_FIELD(&data_020dafa0, s16 *, 4)    = 1;
    M2C_FIELD(&data_020dafa0, s32 *, 0x2C) = 0;
    M2C_FIELD(&data_020dafa0, s32 *, 0xA0) = 0;
    M2C_FIELD(&data_020dafa0, s16 *, 0xA4) = 0;
    M2C_FIELD(&data_020dafa0, s32 *, 0x40) = 0;
    if (func_02044830() == 0) {
        return 0;
    }
    return 1;
}
