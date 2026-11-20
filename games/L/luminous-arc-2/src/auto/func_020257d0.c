#include "m2c.h"

M2C_UNK func_02028edc();   /* extern */
void *func_02028fa0();            /* extern */
extern M2C_UNK data_02169ff8;

void func_020257d0(void *arg0) {
    void *var_r1;

    var_r1 = func_02028fa0(&data_02169ff8, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_02028fa0(&data_02169ff8);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02028edc(&data_02169ff8, var_r1, arg0);
}
