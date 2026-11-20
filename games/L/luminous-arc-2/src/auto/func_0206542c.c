#include "m2c.h"

M2C_UNK func_02003d18();                            /* extern */
M2C_UNK func_02003d30(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02003d94();                            /* extern */
M2C_UNK func_020074fc(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020cab60();                                /* extern */
M2C_UNK func_020cc610(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cddec(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0210e4e8;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_0206542c(void) {
    u8 sp8[512];

    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_0216be68, s8 *, 0x10) = 0;
    func_020caa3c(3, 0, 0x10);
    func_020cddec(3, &data_0210e4e8);
    func_020cc610(0, 0, 0, 1, 0, 2);
    func_020074fc(0, sp8, 0x200);
    func_02003d18();
    func_02003d30(sp8, 0x6000, 0x200);
    func_02003d94();
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) + 1);
}
