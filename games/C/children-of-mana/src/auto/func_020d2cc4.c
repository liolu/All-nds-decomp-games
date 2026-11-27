/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02078354();                             /* extern */
M2C_UNK func_0209feac();            /* extern */
M2C_UNK func_0209fed0();       /* extern */
M2C_UNK func_020a0214();                     /* extern */
void **func_020a03fc();             /* extern */
M2C_UNK func_020d24d4();             /* extern */

void func_020d2cc4(void *arg0, s32 arg1, M2C_UNK arg2, s8 arg3, s32 arg4, u8 arg5, u8 arg6) {
    M2C_UNK saved_reg_r4;
    M2C_UNK var_r4;
    s32 temp_r4;
    s32 var_r5;
    void **temp_r0;

    var_r4                       = saved_reg_r4;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    var_r5                       = arg1;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r5;
    M2C_FIELD(arg0, s8 *, 0x2B)  = 0;
    M2C_FIELD(arg0, u8 *, 0x29)  = arg5;
    M2C_FIELD(arg0, u8 *, 0x2A)  = arg6;
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s8 *, 0x28)  = arg3;
    if (var_r5 < 2) {
        var_r5 = 2;
    } else if (var_r5 > 4) {
        var_r5 = 4;
    }
    switch (var_r5) {                               /* irregular */
        case 4:
            var_r4 = 0x18;
            break;
        case 2:
            var_r4 = 0x16;
            break;
        case 3:
            var_r4 = 0x17;
            break;
    }
    func_020d24d4(arg0, arg2);
    temp_r4                         = (var_r5 * func_02078354(M2C_FIELD(arg0, s32 *, 0xC))) + 0x10;
    M2C_FIELD(arg0, void ***, 0x14) = func_020a03fc(var_r4, 0);
    func_020a0214(M2C_FIELD(arg0, void ***, 0x14));
    func_0209feac(M2C_FIELD(arg0, void ***, 0x14), 1);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, s32), 0x20)(temp_r0, 0, 0xBE - temp_r4);
    func_0209fed0(M2C_FIELD(arg0, void ***, 0x14), 0x100, temp_r4);
}
