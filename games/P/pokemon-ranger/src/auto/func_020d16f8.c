/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6fb0();                /* extern */
s32 func_020d0d28();       /* extern */
void *func_020d0e48();                              /* extern */
s32 func_020d0e58();           /* extern */
M2C_UNK func_020d0fac();            /* extern */

s32 func_020d16f8(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r6;

    temp_r6 = func_020d0e48();
    temp_r0 = func_020d0d28(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020c6fb0(M2C_FIELD(temp_r6, void **, 4) + 0x17E, 2);
    if (!(M2C_FIELD(M2C_FIELD(temp_r6, void **, 4), u16 *, 0x17E) & arg1 & 0xFFFE)) {
        return 7;
    }
    func_020d0fac(0xD, arg0);
    var_r0 = func_020d0e58(0xD, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
