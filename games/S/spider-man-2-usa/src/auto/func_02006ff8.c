/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff93d4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02006b0c(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02006db0(void *, s32, u8);             /* extern */
M2C_UNK func_02006e04(void *, s32, u8);             /* extern */
s32 func_02008a3c(void *, M2C_UNK);                 /* extern */
extern M2C_UNK data_0206f738;

void func_02006ff8(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_02008a3c(arg0, 0x17);
    func_02006b0c(arg0, temp_r0, 0, 0);
    func_02006e04(arg0, temp_r0, M2C_FIELD(arg0, u8 *, 0x362));
    func_02006db0(arg0, temp_r0, M2C_FIELD(arg0, u8 *, 0x363));
    func_01ff93d4(arg0, &data_0206f738);
    M2C_FIELD(arg0, s32 *, 0x380) = 5;
}
