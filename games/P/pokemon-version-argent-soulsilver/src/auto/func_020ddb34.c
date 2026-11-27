#include "m2c.h"

M2C_UNK func_020d3aa8(s32);                         /* extern */
M2C_UNK func_020d3f48();                            /* extern */
M2C_UNK func_020d4294(M2C_UNK);                     /* extern */
s32 func_020db330();                                /* extern */
M2C_UNK func_020ddc20(M2C_UNK, M2C_UNK);            /* extern */

void func_020ddb34(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_020d4294(0);
    func_020d4294(1);
    func_020d4294(2);
    func_020d4294(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_020db330();
        if (var_r0 == 4) {
            do {
                func_020d3aa8(0xA3A47);
                var_r0 = func_020db330();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_020ddc20(1, 1);
    }
    func_020d3f48();
}
