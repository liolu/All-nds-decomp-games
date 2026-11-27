#include "m2c.h"

s32 func_0209ed38(M2C_UNK, M2C_UNK, u16 *);         /* extern */
extern M2C_UNK data_021d43e8;

s32 func_0209e5e4(u16 *arg0) {
    if (func_0209ed38(0x20, 0x20, arg0) == 0) {
        return 0;
    }
    M2C_FIELD(&data_021d43e8, s32 *, 8) = (s32) ((*arg0 * 8) - 0x400);
    return 1;
}
