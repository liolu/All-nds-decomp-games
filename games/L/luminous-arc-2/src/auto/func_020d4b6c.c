#include "m2c.h"

M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0201b498(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0205c3f8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0206ab30(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020d4cf4();                            /* extern */
M2C_UNK *func_020d51b4(M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK *func_020d5274(M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK *func_020d55fc(M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020d58fc();                            /* extern */
extern M2C_UNK data_0212bc68;
extern M2C_UNK data_021476c8;
extern M2C_UNK data_021476cc;
extern M2C_UNK data_021476d0;
extern M2C_UNK data_021476d4;
extern M2C_UNK data_021476d8;
extern M2C_UNK data_021476f0;
extern M2C_UNK data_021476f4;
extern M2C_UNK data_02147714;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_02183a4c;

void func_020d4b6c(void) {
    u8 sp8[68];
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r0_2;
    M2C_UNK *temp_r0_3;
    s32 temp_r4;

    func_020d58fc();
    temp_r0 = func_020d51b4(0, 0);
    func_0201b0f4(sp8, &data_021476c8, temp_r0);
    func_0205c3f8(sp8, 0xF, 1, 0xC0);
    M2C_FIELD(&data_0216be68, M2C_UNK **, 0x2C) = temp_r0;
    temp_r4 = *((M2C_UNK *) ((s8 *) &data_0212bc68 + (M2C_FIELD(&data_02183a4c, u8 *, 0x3E4) * 4)));
    func_0201b498(sp8, temp_r4);
    func_0205c3f8(sp8, 0xF, 1, 0xE8);
    M2C_FIELD(&data_0216be68, s32 *, 0x30) = temp_r4;
    temp_r0_2                              = func_020d5274(0, 0);
    func_0201b0f4(sp8, &data_021476cc, temp_r0_2);
    func_0205c3f8(sp8, 0xF, 1, 0x168);
    M2C_FIELD(&data_0216be68, M2C_UNK **, 0x34) = temp_r0_2;
    func_0205c3f8(&data_021476d0, 0xF, 1, 0x188);
    M2C_FIELD(&data_0216be68, M2C_UNK **, 0x48) = &data_021476d4;
    func_0205c3f8(&data_021476d8, 0xF, 1, 0x198);
    temp_r0_3 = func_020d55fc(0, 0);
    func_0201b0f4(sp8, &data_021476f0, temp_r0_3);
    func_0205c3f8(temp_r0_3, 0xF, 1, 0x1F0);
    M2C_FIELD(&data_0216be68, M2C_UNK **, 0x3C) = temp_r0_3;
    func_0206ab30(&data_021476f4, &data_02147714, 0, 0, 6, 1);
    func_020d4cf4();
}
