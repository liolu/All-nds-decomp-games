/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff93d4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02000e08(s32, s32, M2C_UNK, s32);      /* extern */
M2C_UNK func_02006b0c(void *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_02008a3c(void *, M2C_UNK);                 /* extern */
extern M2C_UNK data_0206f738;

void func_02006f50(void *arg0) {
    s32 temp_r1;
    s32 temp_r4;
    s32 var_r1;

    temp_r4 = func_02008a3c(arg0, 1);
    if (M2C_FIELD(arg0, u8 *, 0x362) != 0) {
        var_r1 = -1;
    } else {
        var_r1 = 1;
    }
    temp_r1 = var_r1 << 8;
    func_02000e08(M2C_FIELD(arg0, s32 *, 0x2F0) + 4, temp_r1, 0x100, temp_r1);
    func_01ff93d4(arg0, &data_0206f738);
    func_02006b0c(arg0, temp_r4, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x380) = 0x10;
}
