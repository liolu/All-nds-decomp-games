/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020645d8();            /* extern */
M2C_UNK func_0206465c();   /* extern */
extern M2C_UNK data_021232ac;

void func_02073f54(void *arg0) {
    void *var_r1;

    var_r1 = func_020645d8(&data_021232ac, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020645d8(&data_021232ac);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0206465c(&data_021232ac, var_r1, arg0);
}
