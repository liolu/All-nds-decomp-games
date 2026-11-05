#include "m2c.h"

M2C_UNK func_020b4c50();   /* extern */
void *func_020b4d14();            /* extern */
extern M2C_UNK data_021df998;

void func_020c8850(void *arg0) {
    void *var_r1;

    var_r1 = func_020b4d14(&data_021df998, 0);
    if (var_r1 != NULL) {
    loop_1:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020b4d14(&data_021df998);
            if (var_r1 != NULL) {
                goto loop_1;
            }
        }
    }
    func_020b4c50(&data_021df998, var_r1, arg0);
}
