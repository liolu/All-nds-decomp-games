/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203d8dc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0203da50(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0203efe4(void *);                      /* extern */
M2C_UNK func_02044a88(void *);                      /* extern */

s32 func_0203fa24(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    void *temp_r4;

    if ((arg0 == NULL) || (M2C_FIELD(arg0, void **, 0x1C) == NULL) || (M2C_FIELD(arg0, s32 *, 0x20) == 0) ||
        (M2C_FIELD(arg0, s32 *, 0x24) == 0)) {
        return -2;
    }
    M2C_FIELD(arg0, s32 *, 0x14)    = 0;
    M2C_FIELD(arg0, s32 *, 8)       = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18)    = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)    = 2;
    temp_r4                         = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x10) = (s32) M2C_FIELD(temp_r4, s32 *, 8);
    temp_r0                         = M2C_FIELD(temp_r4, s32 *, 0x18);
    if (temp_r0 < 0) {
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (0 - temp_r0);
    }
    if (M2C_FIELD(temp_r4, s32 *, 0x18) != 0) {
        var_r0 = 0x2A;
    } else {
        var_r0 = 0x71;
    }
    M2C_FIELD(temp_r4, s32 *, 4) = var_r0;
    if (M2C_FIELD(temp_r4, s32 *, 0x18) == 2) {
        var_r0_2 = func_0203da50(0, 0, 0);
    } else {
        var_r0_2 = func_0203d8dc(0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x30)    = var_r0_2;
    M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
    func_02044a88(temp_r4);
    func_0203efe4(temp_r4);
    return 0;
}
