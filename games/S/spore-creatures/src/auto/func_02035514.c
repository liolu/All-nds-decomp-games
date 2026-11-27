#include "m2c.h"

M2C_UNK func_02034b80(void *);                      /* extern */
M2C_UNK func_020416cc(s32, M2C_UNK);                /* extern */
M2C_UNK func_0206a234(M2C_UNK);                     /* extern */

void func_02035514(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r1;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0xA8);
    temp_r1 = M2C_FIELD(temp_r0, s32 *, 0x90);
    if (temp_r1 >= 0) {
        temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x94);
        var_r5    = 1;
        var_r6    = 0;
        if (temp_r0_2 >= 0) {
            var_r6 = 1;
            var_r5 = (temp_r1 - temp_r0_2) + 1;
        }
        var_r7 = 1;
        if (var_r5 >= 1) {
            do {
                func_02034b80(arg0);
                var_r7 += 1;
            } while (var_r7 <= var_r5);
        }
        if (var_r6 != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xA8), s32 *, 0x94) = -1;
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA8), u8 *, 0) != 0) {
            return;
        }
        func_020416cc(M2C_FIELD(arg0, s32 *, 0x80), 1);
        return;
    }
    func_0206a234(0x11);
}
