#include "m2c.h"

s32 func_020920b4(M2C_UNK, M2C_UNK, u16 *);         /* extern */
extern M2C_UNK data_02170c80;

s32 func_02091978(u16 *arg0) {
    if (func_020920b4(0x20, 0x20, arg0) == 0) {
        return 0;
    }
    M2C_FIELD(&data_02170c80, s32 *, 8) = (s32) ((*arg0 * 8) - 0x400);
    return 1;
}
