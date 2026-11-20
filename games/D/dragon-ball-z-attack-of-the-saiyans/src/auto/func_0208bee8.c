#include "m2c.h"

M2C_UNK func_0208aa40();   /* extern */
void *func_0208ab04();            /* extern */
extern M2C_UNK data_020ddb98;

void func_0208bee8(void *arg0) {
    void *var_r1;

    var_r1 = func_0208ab04(&data_020ddb98, 0);
    if (var_r1 != NULL) {
    loop_1:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0208ab04(&data_020ddb98);
            if (var_r1 != NULL) {
                goto loop_1;
            }
        }
    }
    func_0208aa40(&data_020ddb98, var_r1, arg0);
}
