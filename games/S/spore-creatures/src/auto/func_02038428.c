#include "m2c.h"

void *func_02082dbc(s32);                           /* extern */

void *func_02038428(s32 *arg0) {
    void *temp_r0;

    temp_r0 = func_02082dbc(*arg0);
    return temp_r0 + M2C_FIELD((temp_r0 + M2C_FIELD(temp_r0, u16 *, 0xE)), s32 *, 0xC);
}
