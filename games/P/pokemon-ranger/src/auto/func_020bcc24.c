/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020bc13c();            /* extern */
M2C_UNK func_020bc1c0();   /* extern */
extern M2C_UNK data_020f5064;

void func_020bcc24(void *arg0) {
    void *var_r1;

    var_r1 = func_020bc13c(&data_020f5064, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020bc13c(&data_020f5064);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_020bc1c0(&data_020f5064, var_r1, arg0);
}
