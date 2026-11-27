/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02062a90();            /* extern */
M2C_UNK func_02062b18();   /* extern */
extern M2C_UNK data_02182f0c;

void func_02063b94(void *arg0) {
    void *var_r1;

    var_r1 = func_02062a90(&data_02182f0c, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_02062a90(&data_02182f0c);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02062b18(&data_02182f0c, var_r1, arg0);
}
