#include "m2c.h"

u8 func_02035c70(u8);                               /* extern */
extern M2C_UNK data_02180a4c;

u8 func_02035c98(u8 *arg0) {
    M2C_FIELD(&data_02180a4c, u8 *, 0x579) = func_02035c70(*arg0);
    *arg0 += 1;
    return M2C_FIELD(&data_02180a4c, u8 *, 0x579);
}
