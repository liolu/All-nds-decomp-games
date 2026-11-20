/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0205be50();            /* extern */
M2C_UNK func_0205bed8();   /* extern */
extern M2C_UNK data_020b3f94;

void func_02057a4c(void *arg0) {
    void *var_r1;

    var_r1 = func_0205be50(&data_020b3f94, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0205be50(&data_020b3f94);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0205bed8(&data_020b3f94, var_r1, arg0);
}
