#include "m2c.h"

s32 func_020683f8();                                /* extern */
s32 func_02068400();                                /* extern */
M2C_UNK func_0206992c(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02069ee4(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02084c28(s32, s32);                    /* extern */
M2C_UNK func_0208840c();                            /* extern */
M2C_UNK func_02088560(s32);                         /* extern */
extern M2C_UNK data_020e10ac;
extern M2C_UNK data_020e10e0;
extern M2C_UNK data_020e13cc;

void func_02066a38(void) {
    s32 temp_r4;

    func_0208840c();
    temp_r4 = func_020683f8();
    func_02084c28(temp_r4, func_02068400());
    func_02069ee4(&data_020e10e0, 0x7F, 0);
    M2C_FIELD(&data_020e10ac, s32 *, 0x28)  = 0x18;
    M2C_FIELD(&data_020e10ac, s32 *, 0x30)  = 0x18;
    M2C_FIELD(&data_020e10ac, s32 *, 0x2F8) = 0;
    M2C_FIELD(&data_020e10ac, s8 *, 0x2FC)  = 1;
    M2C_FIELD(&data_020e10ac, s32 *, 0x300) = 0x7F000;
    M2C_FIELD(&data_020e10ac, s32 *, 0x304) = 0x7F000;
    M2C_FIELD(&data_020e10ac, s32 *, 0x308) = 0;
    M2C_FIELD(&data_020e10ac, s32 *, 0x310) = 0x7F000;
    M2C_FIELD(&data_020e10ac, s32 *, 0x314) = 0x7F000;
    M2C_FIELD(&data_020e10ac, s32 *, 0x30C) = 0x7F000;
    M2C_FIELD(&data_020e10ac, s32 *, 0x318) = 0x7F000;
    M2C_FIELD(&data_020e10ac, s32 *, 0x31C) = func_02068400();
    M2C_FIELD(&data_020e10ac, s8 *, 0x32C)  = 0;
    M2C_FIELD(&data_020e10ac, s8 *, 0x32D)  = 0;
    M2C_FIELD(&data_020e10ac, s32 *, 0x340) = 0;
    M2C_FIELD(&data_020e10ac, s32 *, 0x344) = 0;
    M2C_FIELD(&data_020e10ac, s32 *, 0x348) = 0;
    M2C_FIELD(&data_020e10ac, s8 *, 0x34C)  = 1;
    M2C_FIELD(&data_020e10ac, s32 *, 0x350) = 0x100;
    M2C_FIELD(&data_020e10ac, s32 *, 0x354) = 5;
    if ((u32) M2C_FIELD(&data_020e10ac, u32 *, 0x328) < 0xAU) {
        func_0206992c(&data_020e13cc, 0xA);
    }
    func_02088560((s32) M2C_FIELD(&data_020e10ac, s32 *, 0x300) >> 0xC);
}
