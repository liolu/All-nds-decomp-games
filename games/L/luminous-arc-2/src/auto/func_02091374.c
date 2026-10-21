#include "m2c.h"

extern s32 data_02170c7c;

u8 func_02091374(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x30) + data_02170c7c), u8 *, 0x1D);
}
