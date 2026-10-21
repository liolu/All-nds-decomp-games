#include "m2c.h"

M2C_UNK func_0201f424();         /* extern */
void *func_0201f4e8();                  /* extern */

void func_0202e678(s32 arg0, void *arg1) {
    void *var_r1;

    var_r1 = func_0201f4e8(arg0, 0);
    if (var_r1 != NULL) {
    loop_1:
        if ((u32) M2C_FIELD(arg1, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0201f4e8(arg0);
            if (var_r1 != NULL) {
                goto loop_1;
            }
        }
    }
    func_0201f424(arg0, var_r1, arg1);
    M2C_FIELD(arg1, s32 *, 4) = arg0;
}
