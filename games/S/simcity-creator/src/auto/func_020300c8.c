#include "m2c.h"

M2C_UNK func_02007618();                            /* extern */
M2C_UNK func_0200ca4c(M2C_UNK *);                   /* extern */
M2C_UNK func_0200ca64(M2C_UNK *);                   /* extern */
M2C_UNK func_020302e4();                            /* extern */
M2C_UNK func_02030610();                            /* extern */
M2C_UNK func_02031194();                            /* extern */
extern M2C_UNK data_020d6d00;
extern M2C_UNK data_020d6d10;
extern M2C_UNK data_020d6d1c;
extern M2C_UNK func_02030180;
extern M2C_UNK func_020301b8;

void func_020300c8(void) {
    if (M2C_FIELD(&data_020d6d00, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_020d6d00, s32 *, 0xC) = 1;
    func_02007618();
    M2C_FIELD(&data_020d6d00, M2C_UNK **, 0x10) = &func_02030180;
    M2C_FIELD(&data_020d6d00, s32 *, 0x14)      = 0;
    M2C_FIELD(&data_020d6d00, M2C_UNK **, 0x1C) = &func_020301b8;
    M2C_FIELD(&data_020d6d00, s32 *, 0x20)      = 0;
    func_0200ca4c(&data_020d6d10);
    func_0200ca64(&data_020d6d1c);
    func_020302e4();
    func_02031194();
    func_02030610();
    M2C_FIELD(&data_020d6d00, s8 *, 0)  = -1;
    M2C_FIELD(&data_020d6d00, s32 *, 4) = 1;
}
