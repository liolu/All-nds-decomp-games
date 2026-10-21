#include "m2c.h"

s32 func_0201037c();                                /* extern */
extern M2C_UNK data_0214a2a0;

s32 func_0201083c(void) {
    if (func_0201037c() != 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(&data_0214a2a0, void **, 4), s32 *, 4);
}
