#include "m2c.h"

void *func_0208c4e8();                       /* extern */
M2C_UNK func_02094410();                         /* extern */

void func_0208ced8(M2C_UNK arg0) {
    void *temp_r0;

    func_02094410(func_0208c4e8() + 0x18);
    temp_r0                      = func_0208c4e8(arg0);
    M2C_FIELD(temp_r0, s32 *, 4) = (s32) (M2C_FIELD(temp_r0, s32 *, 4) & ~8);
}
