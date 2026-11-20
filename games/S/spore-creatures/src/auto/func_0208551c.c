#include "m2c.h"

M2C_UNK func_020ae730();   /* extern */
void *func_020ae7f4();            /* extern */
extern M2C_UNK data_020e5240;

void func_0208551c(void *arg0) {
    void *var_r1;

    var_r1 = func_020ae7f4(&data_020e5240, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020ae7f4(&data_020e5240);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_020ae730(&data_020e5240, var_r1, arg0);
}
