/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_0205b38c();                   /* extern */

void func_0205d50c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) (temp_r1 - 1);
    if (M2C_FIELD(arg0, s32 *, 0x120) != 0) {
        return;
    }
    func_0205b38c(arg0);
}
