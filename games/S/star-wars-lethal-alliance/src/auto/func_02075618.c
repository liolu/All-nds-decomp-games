/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0207a248();            /* extern */
M2C_UNK func_0207a2cc();   /* extern */
extern M2C_UNK data_020ea7ec;

void func_02075618(void *arg0) {
    void *var_r1;

    var_r1 = func_0207a248(&data_020ea7ec, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0207a248(&data_020ea7ec);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0207a2cc(&data_020ea7ec, var_r1, arg0);
}
