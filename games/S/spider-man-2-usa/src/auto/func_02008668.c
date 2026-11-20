/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff93d4();           /* extern */
M2C_UNK func_02006ac0();                 /* extern */
M2C_UNK func_02006b0c(); /* extern */
M2C_UNK func_02006db0();             /* extern */
M2C_UNK func_02006e04();             /* extern */
M2C_UNK func_02006ee8();                 /* extern */
s32 func_02008a3c();                 /* extern */
s32 func_0200a04c();                       /* extern */
extern M2C_UNK data_0206f6f8;
extern M2C_UNK data_0206f738;
extern M2C_UNK data_0206f758;

void func_02008668(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02008a3c(arg0, 0x15);
    func_02006b0c(arg0, temp_r0, 1, 0);
    temp_r4 = func_0200a04c(&data_0206f758);
    func_02006ee8(arg0, temp_r4 + func_0200a04c(M2C_FIELD(arg0, s32 *, 0x3B4) + 8));
    func_02006ac0(arg0, func_0200a04c(&data_0206f6f8));
    func_02006e04(arg0, temp_r0, M2C_FIELD(arg0, u8 *, 0x362));
    func_02006db0(arg0, temp_r0, M2C_FIELD(arg0, u8 *, 0x363));
    func_01ff93d4(arg0, &data_0206f738);
    M2C_FIELD(arg0, s32 *, 0x380) = 0x11;
}
