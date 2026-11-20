/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff93d4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02006ac0(void *, s32);                 /* extern */
M2C_UNK func_02006b0c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02006db0(void *, M2C_UNK, u8);         /* extern */
M2C_UNK func_02006e04(void *, M2C_UNK, u8);         /* extern */
M2C_UNK func_02007480();                            /* extern */
s32 func_0200a04c(M2C_UNK *);                       /* extern */
M2C_UNK func_0201fa80(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0206f700;
extern M2C_UNK data_0206f738;
extern M2C_UNK data_0207a4c8;

void func_02007620(void *arg0, M2C_UNK arg1) {
    func_02007480();
    func_02006b0c(arg0, arg1, 0, 0);
    func_02006ac0(arg0, func_0200a04c(&data_0206f700));
    func_02006e04(arg0, arg1, M2C_FIELD(arg0, u8 *, 0x362));
    func_02006db0(arg0, arg1, M2C_FIELD(arg0, u8 *, 0x363));
    func_01ff93d4(arg0, &data_0206f738);
    func_0201fa80(&data_0207a4c8);
    M2C_FIELD(arg0, s32 *, 0x380) = 0xC;
}
