#include "m2c.h"

M2C_UNK func_020635fc();                            /* extern */
M2C_UNK func_020695ec(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0206ab30(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
M2C_UNK func_020cddec(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020d4e68(u8);                          /* extern */
M2C_UNK func_020d503c(u8);                          /* extern */
extern M2C_UNK data_0210e108;
extern M2C_UNK data_0210e130;
extern M2C_UNK data_0210e158;
extern M2C_UNK data_0210e184;
extern M2C_UNK data_0210e1a4;
extern M2C_UNK data_0210e1c4;
extern M2C_UNK data_0210e1e4;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_02062d34(void) {
    switch (M2C_FIELD(&data_0216be68, u8 *, 0xB5)) { /* irregular */
        case 0:
            func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 6, 2, 6, 1, 4, 0, 1, 0, 0);
            func_020cddec(3, &data_0210e108);
            func_020d4e68(M2C_FIELD(&data_0216be68, u8 *, 0x6B));
            func_020d503c(M2C_FIELD(&data_0216be68, u8 *, 0x6B));
            func_020caa3c(3, 0, 0x10);
            func_0206c4b4(0, 0x21, 0x7F, 0, 0, 0x100);
            M2C_FIELD(&data_0216be68, s8 *, 0xA8) = 0;
            break;
        case 1:
            func_020ccda8(2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 6, 2, 6, 1, 4, 0, 1, 0, 0);
            func_020caa3c(2, 0, 0x10);
            break;
        case 2:
            func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 6, 2, 6, 1, 4, 0, 1, 0, 0);
            func_020cddec(3, &data_0210e130);
            func_020d4e68(M2C_FIELD(&data_0216be68, u8 *, 0x6B));
            func_020d503c(M2C_FIELD(&data_0216be68, u8 *, 0x6B));
            func_020caa3c(3, 0, 0x10);
            break;
    }
    func_020cddec(7, &data_0210e158);
    func_0206ab30(&data_0210e184, &data_0210e1a4, 0, 0, 2, 2);
    func_0206ab30(&data_0210e1c4, &data_0210e1e4, 0x1C0, 4, 2, 2);
    func_020695ec(2, 1, 0);
    func_020635fc();
    M2C_FIELD(&data_0216ce68, u8 *, 0xBAF) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAF) + 1);
}
