#include "m2c.h"

M2C_UNK func_0205cd84(s32, s8);                     /* extern */
M2C_UNK func_0205d874(s8);                          /* extern */
M2C_UNK func_0205dfd8(s32, s8);                     /* extern */
M2C_UNK func_020a3ab4(u16);                         /* extern */
M2C_UNK func_020a3b54(M2C_UNK);                     /* extern */
M2C_UNK func_020cb1e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cc4f8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02109ed4;
extern u16 data_02152a24;
extern M2C_UNK data_02154024;
extern M2C_UNK data_02172940;

void func_020a3094(void) {
    u16 temp_r4;

    func_020a3b54(0);
    temp_r4 = data_02152a24;
    func_0205d874(M2C_FIELD(&data_02172940, s8 *, 0x18));
    func_0205d874(M2C_FIELD(&data_02172940, s8 *, 0x19));
    func_0205dfd8(*((M2C_UNK *) ((s8 *) &data_02109ed4 + (temp_r4 * 4))), M2C_FIELD(&data_02172940, s8 *, 0x18));
    func_0205cd84(M2C_FIELD(&data_02172940, s32 *, 0) + (M2C_FIELD(&data_02172940, s32 *, 4) + 2),
                  M2C_FIELD(&data_02172940, s8 *, 0x19));
    func_020cb1e4(0x20, 8, 0, 0x10, (s32) * (u16 *) 0x0400000C, 0x7200);
    func_020cc4f8(&data_02154024, 1, 0x30, 0, 0x80, 0xA0, 2, 0xC0);
    M2C_FIELD(&data_02154024, u16 *, 4) = (u16) (M2C_FIELD(&data_02154024, u16 *, 4) & ~0xC00);
    M2C_FIELD(&data_02154024, u16 *, 4) = (u16) (M2C_FIELD(&data_02154024, u16 *, 4) | 0x400);
    func_020a3ab4(temp_r4);
    M2C_FIELD(&data_02172940, u8 *, 0x16) = (u8) (M2C_FIELD(&data_02172940, u8 *, 0x16) + 1);
}
