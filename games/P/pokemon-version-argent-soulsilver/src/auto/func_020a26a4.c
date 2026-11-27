#include "m2c.h"

M2C_UNK func_020d1e38(s32);                         /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020a688c();                            /* extern */
M2C_UNK func_020a6964();                            /* extern */
M2C_UNK func_020a6bc4();                            /* extern */
M2C_UNK func_020a6c00();                            /* extern */
M2C_UNK func_020a0bf0(s32, M2C_UNK);                /* extern */
M2C_UNK func_020a2dc4(void *);                      /* extern */
M2C_UNK func_020a2ddc(void *);                      /* extern */

s32 func_020a26a4(void *arg0) {
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s8 temp_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    var_r1  = 1;
    temp_r0 = M2C_FIELD(temp_r4, s8 *, 0x73);
    if ((temp_r0 != 0) && (temp_r0 != 4)) {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        func_020d1e38(M2C_FIELD(temp_r4, s32 *, 0x68) + 0x20);
        func_020a6bc4();
        func_020a6c00();
        func_020a6964();
    }
    func_020a688c();
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) & ~6);
    if (M2C_FIELD(temp_r4, s8 *, 0x73) == 2) {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x68);
    } else {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x64);
    }
    func_020a0bf0(var_r0, 0);
    temp_r5 = _Z20DisableIRQInterruptsv();
    func_020a2ddc(temp_r4);
    func_020a2dc4(temp_r4);
    _Z20SetIRQInterruptStatei(temp_r5);
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) | 0x20);
    return 0;
}
