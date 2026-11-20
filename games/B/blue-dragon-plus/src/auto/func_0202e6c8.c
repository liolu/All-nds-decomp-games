#include "m2c.h"

M2C_UNK func_0201f424();   /* extern */
void *func_0201f4e8();            /* extern */
extern M2C_UNK data_0215c118;

void func_0202e6c8(void *arg0) {
    void *var_r1;

    var_r1 = func_0201f4e8(&data_0215c118, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0201f4e8(&data_0215c118);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0201f424(&data_0215c118, var_r1, arg0);
}
