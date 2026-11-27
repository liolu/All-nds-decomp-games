#include "m2c.h"

M2C_UNK func_02007dac(M2C_UNK);                     /* extern */
M2C_UNK func_0201dc3c(s32);                         /* extern */
M2C_UNK func_0203a9bc(s32);                         /* extern */
M2C_UNK func_0203f9cc(s32);                         /* extern */
M2C_UNK func_02091394(void *);                      /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */
s32 func_02094cdc(M2C_UNK);                         /* extern */
M2C_UNK func_0209524c(M2C_UNK);                     /* extern */
M2C_UNK func_0209667c(s32);                         /* extern */

void *func_0206c1c0(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    void **temp_r0;

    func_0209524c(0);
    func_0209524c(1);
    func_02007dac(0);
    if (func_02094cdc(0) != 0) {
        do {
            func_02007dac(0);
        } while (func_02094cdc(0) != 0);
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xB8);
    if (temp_r5 != 0) {
        func_0209667c(temp_r5);
        func_020934a8(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (temp_r5_2 != 0) {
        func_0203a9bc(temp_r5_2);
        func_020934a8(temp_r5_2);
    }
    temp_r5_3 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_r5_3 != 0) {
        func_0201dc3c(temp_r5_3);
        func_020934a8(temp_r5_3);
    }
    temp_r5_4 = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_r5_4 != 0) {
        func_0209667c(temp_r5_4);
        func_020934a8(temp_r5_4);
    }
    temp_r5_5 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (temp_r5_5 != 0) {
        func_0203f9cc(temp_r5_5);
        func_020934a8(temp_r5_5);
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x98);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_02091394(arg0 + 0x60);
    func_02091394(arg0 + 0x38);
    func_02091394(arg0 + 8);
    return arg0;
}
