/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011c38();                                /* extern */
s32 func_02011ef8(s32, M2C_UNK);                    /* extern */
s32 func_020992bc(void **);                         /* extern */
s32 func_0209c2d8(void **);                         /* extern */
s32 func_0209c330(void **);                         /* extern */
M2C_UNK func_0209c388(void **, M2C_UNK);            /* extern */

void func_020d39ec(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_5;
    s32 var_r5;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_6;
    void **temp_r0_7;
    void **temp_r0_8;
    void **temp_r0_9;

    temp_r0 = func_020992bc(M2C_FIELD(arg0, void ***, 0x10));
    if ((M2C_FIELD(arg0, u8 *, 0x46) != 0) && (M2C_FIELD(arg0, u8 *, 0x47) != 0)) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (temp_r0 != var_r5) {
        temp_r0_2 = M2C_FIELD(arg0, void ***, 0x10);
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, s32), 0xA8)(temp_r0_2, var_r5);
    }
    if (var_r5 == 0) {
        return;
    }
    if (func_02011ef8(func_02011c38(), 0x19) != 0) {
        temp_r0_3 = M2C_FIELD(arg0, void ***, 0x10);
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0xD4)(temp_r0_3, 6);
        func_0209c388(M2C_FIELD(arg0, void ***, 0x10), 6);
    }
    if (func_0209c2d8(M2C_FIELD(arg0, void ***, 0x10)) != 0) {
        temp_r0_4 = M2C_FIELD(arg0, void ***, 0x38);
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0_4, 0);
    }
    temp_r0_5 = func_0209c330(M2C_FIELD(arg0, void ***, 0x10));
    if (temp_r0_5 == -1) {
        return;
    }
    if (M2C_FIELD((arg0 + temp_r0_5), u8 *, 0x30) != 0) {
        if (temp_r0_5 != 6) {
            temp_r0_6 = M2C_FIELD(arg0, void ***, 0x38);
            M2C_FIELD(*temp_r0_6, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0_6, 1);
        } else {
            temp_r0_7 = M2C_FIELD(arg0, void ***, 0x38);
            M2C_FIELD(*temp_r0_7, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0_7, 3);
        }
        temp_r0_8 = M2C_FIELD(arg0, void ***, 0x10);
        M2C_FIELD(*temp_r0_8, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x10)(temp_r0_8, 4, 0);
        M2C_FIELD(arg0, s8 *, 0x48) = 1;
        return;
    }
    temp_r0_9 = M2C_FIELD(arg0, void ***, 0x38);
    M2C_FIELD(*temp_r0_9, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0_9, 4);
}
