#include "m2c.h"

M2C_UNK func_0208a3c0(M2C_UNK, u16, M2C_UNK);       /* extern */
void *func_02091340();                              /* extern */

void func_02091738(M2C_UNK arg0, M2C_UNK arg1) {
    u16 temp_r1;
    void *temp_r0;

    temp_r0                        = func_02091340();
    M2C_FIELD(temp_r0, u8 *, 0x1D) = (u8) M2C_FIELD(temp_r0, u8 *, 0x1E);
    temp_r1                        = M2C_FIELD(temp_r0, u16 *, 0x22);
    if ((temp_r1 != 2) && (temp_r1 != 3) && (temp_r1 != 4)) {
        return;
    }
    func_0208a3c0(arg0, temp_r1, arg1);
}
