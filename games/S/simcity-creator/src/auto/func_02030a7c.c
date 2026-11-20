#include "m2c.h"

M2C_UNK func_02028e20();   /* extern */
void *func_02028ee4();            /* extern */
extern M2C_UNK data_020d9118;

void func_02030a7c(void *arg0) {
    void *var_r1;

    var_r1 = func_02028ee4(&data_020d9118, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_02028ee4(&data_020d9118);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02028e20(&data_020d9118, var_r1, arg0);
}
