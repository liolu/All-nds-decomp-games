#include "m2c.h"

extern M2C_UNK data_02186608;

s32 func_0206e7dc(s32 arg0) {
    return M2C_FIELD(&data_02186608, u16 *, 0x34) & arg0;
}
