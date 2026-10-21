#include "m2c.h"

M2C_UNK func_0200509c(s32);                         /* extern */
s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_020989f4();                            /* extern */
M2C_UNK func_02098acc();                            /* extern */
M2C_UNK func_02098c64();                            /* extern */
M2C_UNK func_02098ca0();                            /* extern */
M2C_UNK func_0209aa24(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209c96c(void *);                      /* extern */
M2C_UNK func_0209c984(void *);                      /* extern */

s32 func_0209c24c(void *arg0) {
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
        func_0200509c(M2C_FIELD(temp_r4, s32 *, 0x68) + 0x20);
        func_02098c64();
        func_02098ca0();
        func_02098acc();
    }
    func_020989f4();
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) & ~6);
    if (M2C_FIELD(temp_r4, s8 *, 0x73) == 2) {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x68);
    } else {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x64);
    }
    func_0209aa24(var_r0, 0);
    temp_r5 = func_02006be0();
    func_0209c984(temp_r4);
    func_0209c96c(temp_r4);
    func_02006bf4(temp_r5);
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) | 0x20);
    return 0;
}
