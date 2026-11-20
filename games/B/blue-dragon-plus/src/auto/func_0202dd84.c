#include "m2c.h"

M2C_UNK func_0202df0c();                            /* extern */
M2C_UNK func_0202e25c();                            /* extern */
M2C_UNK func_0202ec7c();                            /* extern */
M2C_UNK func_0203a534();                            /* extern */
M2C_UNK func_0203fdb8(M2C_UNK *);                   /* extern */
M2C_UNK func_0203fdd0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0215c0d8;
extern M2C_UNK data_0215c0e8;
extern M2C_UNK data_0215c0f4;
extern M2C_UNK func_0202de5c;
extern M2C_UNK func_0202de94;

void func_0202dd84(void) {
    if (M2C_FIELD(&data_0215c0d8, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_0215c0d8, s32 *, 0xC) = 1;
    func_0203a534();
    M2C_FIELD(&data_0215c0d8, M2C_UNK **, 0x10) = &func_0202de5c;
    M2C_FIELD(&data_0215c0d8, s32 *, 0x14)      = 0;
    M2C_FIELD(&data_0215c0d8, M2C_UNK **, 0x1C) = &func_0202de94;
    M2C_FIELD(&data_0215c0d8, s32 *, 0x20)      = 0;
    func_0203fdb8(&data_0215c0e8);
    func_0203fdd0(&data_0215c0f4);
    func_0202df0c();
    func_0202ec7c();
    func_0202e25c();
    M2C_FIELD(&data_0215c0d8, s8 *, 0)  = -1;
    M2C_FIELD(&data_0215c0d8, s32 *, 4) = 1;
}
