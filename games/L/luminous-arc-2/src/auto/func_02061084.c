#include "m2c.h"

M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *, u8);    /* extern */
M2C_UNK func_0205bd10(M2C_UNK *, M2C_UNK *, M2C_UNK *, u16, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern M2C_UNK data_0210de10;
extern M2C_UNK data_0210de28;
extern M2C_UNK data_0210de40;
extern M2C_UNK data_0216be68;

void func_02061084(void) {
    u8 spA0[52];
    u8 sp6E[50];
    u8 sp3C[50];

    func_020ccda8(1, 0, 0, 0, 0, 0, 0, 0, 1, 3, 6, 2, 6, 1, 4, 0, 1, 0, 0);
    func_0201b0f4(spA0, &data_0210de10,
                  *(s8 *) (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), s32 *, 0) +
                           (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), u8 *, 0xB) * 0x2D)));
    func_0201b0f4(sp6E, &data_0210de28,
                  *(s8 *) (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), s32 *, 0) +
                           (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), u8 *, 0xB) * 0x2D)));
    func_0201b0f4(sp3C, &data_0210de40,
                  *(s8 *) (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), s32 *, 0) +
                           (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), u8 *, 0xB) * 0x2D)));
    func_0205bd10(spA0, sp6E, sp3C, *(u16 *) 0x0400000E, 0, 1, 0x10, 0, 0);
    func_020caa3c(1, 0, 0x10);
    M2C_FIELD(&data_0216be68, s8 *, 0xAA) = 9;
    M2C_FIELD(&data_0216be68, s8 *, 0xB3) = 3;
}