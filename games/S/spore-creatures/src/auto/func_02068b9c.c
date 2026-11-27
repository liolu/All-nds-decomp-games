#include "m2c.h"

M2C_UNK func_02068a14(M2C_UNK *);                   /* extern */
M2C_UNK func_020abfec(M2C_UNK, u8 *);               /* extern */
M2C_UNK func_020ac09c(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_020ac0fc(M2C_UNK, u8 *);               /* extern */
M2C_UNK func_020ac1a4(M2C_UNK, s32 *);              /* extern */
extern M2C_UNK data_020e10ac;
extern M2C_UNK data_020e13f0;

void func_02068b9c(M2C_UNK arg0, s32 arg1) {
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 sp4;
    u8 sp1;
    u8 sp0;

    if (arg1 == 1) {
        sp10 = M2C_FIELD(&data_020e10ac, s32 *, 0x344);
        spC  = M2C_FIELD(&data_020e10ac, s32 *, 0x348);
        sp1  = M2C_FIELD(&data_020e10ac, u8 *, 0x34C);
        func_020ac1a4(arg0, &sp10);
        func_020ac1a4(arg0, &spC);
        func_020ac0fc(arg0, &sp1);
        return;
    }
    func_020ac09c(arg0, &sp8);
    func_020ac09c(arg0, &sp4);
    func_020abfec(arg0, &sp0);
    M2C_FIELD(&data_020e10ac, s32 *, 0x344) = sp8;
    M2C_FIELD(&data_020e10ac, s32 *, 0x348) = sp4;
    M2C_FIELD(&data_020e10ac, u8 *, 0x34C)  = sp0;
    func_02068a14(&data_020e13f0);
}
