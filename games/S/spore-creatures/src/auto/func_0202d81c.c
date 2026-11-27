#include "m2c.h"

M2C_UNK func_0202d870(void *, M2C_UNK);             /* extern */
M2C_UNK func_0208c884(s32);                         /* extern */

void *func_0202d81c(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_0208c884(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    func_0202d870(arg0, arg1);
    return arg0;
}
