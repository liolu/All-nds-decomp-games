/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020522b4();            /* extern */
M2C_UNK func_0205233c();   /* extern */
extern M2C_UNK data_020da06c;

void func_0205a474(void *arg0) {
    void *var_r1;

    var_r1 = func_020522b4(&data_020da06c, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020522b4(&data_020da06c);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0205233c(&data_020da06c, var_r1, arg0);
}
