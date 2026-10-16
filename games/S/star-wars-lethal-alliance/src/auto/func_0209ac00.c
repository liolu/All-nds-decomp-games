#include "m2c.h"

M2C_UNK func_0207ab28();                            /* extern */
extern M2C_UNK data_020ec6c0;

s32 func_0209ac00(void) {
    if (M2C_FIELD(&data_020ec6c0, s32 *, 4) == 0) {
        func_0207ab28();
    }
    return M2C_FIELD(&data_020ec6c0, s32 *, 4);
}
