/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02021258(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02022e10(s32, M2C_UNK);                /* extern */
s32 func_0202ace0();                                /* extern */
void *func_0202acfc();                              /* extern */

s32 func_0202b670(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_0202acfc();
    temp_r0 = func_0202ace0();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_02022e10(M2C_FIELD(temp_r4, s32 *, 4), 0x7C0);
    func_02021258(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7C0);
    return 0;
}
