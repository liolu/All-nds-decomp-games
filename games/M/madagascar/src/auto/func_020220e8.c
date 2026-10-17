/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020058ac(void **);                     /* extern */
s32 func_020058bc(void **);                         /* extern */
s32 func_020058c4(void **);                         /* extern */
M2C_UNK func_0201086c();                            /* extern */

void func_020220e8(void *arg0) {
    void **temp_r0;

    func_0201086c();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x2D8);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 8)(temp_r0);
    if (func_020058bc(M2C_FIELD(arg0, void ***, 0x2D8)) != 0) {
        return;
    }
    if (func_020058c4(M2C_FIELD(arg0, void ***, 0x2D8)) == 0) {
        return;
    }
    func_020058ac(M2C_FIELD(arg0, void ***, 0x2D8));
}
