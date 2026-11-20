/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020161b8(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0201fa30(void *, M2C_UNK);             /* extern */
M2C_UNK func_02035aa4(void **, M2C_UNK);            /* extern */
M2C_UNK func_02036848(void *, s32, M2C_UNK *);      /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern M2C_UNK data_02076b40;
extern M2C_UNK data_0210c3d0;

void *func_02016eec(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, M2C_UNK *arg5) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    void **temp_r0_3;

    func_0201fa30(arg0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210c3d0;
    temp_r0                        = func_0203a6cc(0x38);
    var_r1                         = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_020161b8(temp_r0, arg1, 0);
    }
    func_02036848(arg0 + 0x18, var_r1, arg5);
    temp_r0_2 = func_0203a6cc(0x38);
    var_r1_2  = temp_r0_2;
    if (var_r1_2 != 0) {
        var_r1_2 = func_020161b8(temp_r0_2, arg2, 0);
    }
    func_02036848(arg0 + 0x40, var_r1_2, &data_02076b40);
    M2C_FIELD(arg0, s32 *, 0x68) = arg3;
    M2C_FIELD(arg0, s32 *, 0x6C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    func_02035aa4(M2C_FIELD(arg0, void ***, 0x38), 2);
    func_02035aa4(M2C_FIELD(arg0, void ***, 0x60), 2);
    if (arg3 == 3) {
        temp_r0_3 = M2C_FIELD(arg0, void ***, 0x38);
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0x10)(temp_r0_3, 1);
    }
    return arg0;
}
