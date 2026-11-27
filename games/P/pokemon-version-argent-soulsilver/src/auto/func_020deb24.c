#include "m2c.h"

s32 func_020de664();                                /* extern */
extern M2C_UNK data_021e4240;

s32 func_020deb24(void) {
    if (func_020de664() != 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(&data_021e4240, void **, 4), s32 *, 4);
}
