/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000d88();                            /* extern */
M2C_UNK func_02000dcc();                            /* extern */
M2C_UNK func_02000e60();                            /* extern */
M2C_UNK func_02001a88(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02002ee4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02002f1c();                            /* extern */
M2C_UNK func_02002f50();                            /* extern */
M2C_UNK func_02003014(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02003080(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02004fd0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200503c(M2C_UNK, M2C_UNK, u16);       /* extern */
M2C_UNK func_02008f6c();                            /* extern */
M2C_UNK func_0204836c(M2C_UNK);                     /* extern */
M2C_UNK func_02048370(M2C_UNK);                     /* extern */
M2C_UNK func_02048534(M2C_UNK);                     /* extern */
M2C_UNK func_02048854(M2C_UNK);                     /* extern */
M2C_UNK func_020488f4(M2C_UNK);                     /* extern */
M2C_UNK func_02066ac0();                            /* extern */
M2C_UNK func_02066b54();                            /* extern */
M2C_UNK func_020673ac(M2C_UNK);                     /* extern */
M2C_UNK func_020674a0(M2C_UNK);                     /* extern */
M2C_UNK func_02068048();                            /* extern */
extern M2C_UNK data_020ce12c;

void func_0204825c(s32 arg0, M2C_UNK arg1) {
    M2C_FIELD(&data_020ce12c, s16 *, 0x6E) = 0;
    M2C_FIELD(&data_020ce12c, s8 *, 0x6D)  = 0;
    M2C_FIELD(&data_020ce12c, s8 *, 1)     = 0;
    func_02000d88();
    func_02066ac0();
    func_02068048();
    func_02000dcc();
    func_02000e60();
    func_02002f50();
    func_02002f1c();
    func_02002ee4(0x20, 0x10);
    func_02008f6c();
    func_02001a88(0x021A0000, 0x160000, 0, 0);
    func_020488f4(arg1);
    *(u16 *) 0x04000304 &= ~0x8000;
    func_0200503c(0, 4, *(u16 *) 0x04000304);
    func_02003080(0, 0x100);
    func_02004fd0(0, 0);
    func_02003014(0x20, 0);
    func_020674a0(3);
    func_020673ac(0x40);
    func_02048370(arg1);
    func_02048854(arg1);
    func_02048534(arg1);
    func_0204836c(arg1);
    M2C_FIELD(&data_020ce12c, s8 *, 2) = 1;
    func_02066b54();
    *(s32 *) 0x04001000 |= 0x10000;
}
