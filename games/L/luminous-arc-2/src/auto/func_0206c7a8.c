#include "m2c.h"

s32 func_0201b6f4(void *, M2C_UNK *, M2C_UNK);      /* extern */
extern M2C_UNK data_0211942c;
extern M2C_UNK data_02133d0a;

s32 func_0206c7a8(s32 arg0) {
    if (func_0201b6f4((M2C_UNK *) ((s8 *) &data_02133d0a + (arg0 * 0xF)), &data_0211942c, 5) == 0) {
        return 1;
    }
    return 0;
}
