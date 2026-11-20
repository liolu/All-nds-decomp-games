#include "m2c.h"

M2C_UNK func_0202af40(M2C_UNK *, M2C_UNK *, M2C_UNK, u16); /* extern */
M2C_UNK func_0204a358(u8);                          /* extern */
M2C_UNK func_0205c3f8(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020f04e8;
extern M2C_UNK data_021132e0;
extern M2C_UNK data_0213cddd;
extern M2C_UNK data_0217aa4c;

void func_0203b2f8(void) {
    func_0202af40(&data_020f04e8, &data_0213cddd, 0, *(u16 *) 0x04000008);
    func_0205c3f8(M2C_FIELD(&data_021132e0, s32 *, 0), 1, 1, 0x200);
    func_0205c3f8(M2C_FIELD(&data_021132e0, s32 *, 0x24), 1, 1, 0x208);
    func_0205c3f8(M2C_FIELD(&data_021132e0, s32 *, 0x28), 1, 1, 0x214);
    func_0205c3f8(M2C_FIELD(&data_021132e0, s32 *, 0x2C), 1, 1, 0x228);
    func_0204a358(M2C_FIELD(&data_0217aa4c, u8 *, 0xB3E));
    func_0205c3f8(M2C_FIELD(&data_021132e0, s32 *, 0x30), 1, 1, 0x244);
    func_0205c3f8(M2C_FIELD(&data_021132e0, s32 *, 8), 1, 1, 0x24C);
}
