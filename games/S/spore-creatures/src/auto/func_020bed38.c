#include "m2c.h"

M2C_UNK func_020b6c40(s32);                         /* extern */
M2C_UNK func_020b6f24();                            /* extern */
M2C_UNK func_020b72f0(M2C_UNK);                     /* extern */
s32 func_020bc5f8();                                /* extern */
M2C_UNK func_020bee24(M2C_UNK, M2C_UNK);            /* extern */

void func_020bed38(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_020b72f0(0);
    func_020b72f0(1);
    func_020b72f0(2);
    func_020b72f0(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_020bc5f8();
        if (var_r0 == 4) {
            do {
                func_020b6c40(0xA3A47);
                var_r0 = func_020bc5f8();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_020bee24(1, 1);
    }
    func_020b6f24();
}
