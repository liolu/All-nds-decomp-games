#include "m2c.h"

M2C_UNK func_0203648c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0203665c(M2C_UNK);                     /* extern */
M2C_UNK func_02038258(M2C_UNK);                     /* extern */
extern M2C_UNK data_0215de14;
extern M2C_UNK func_020382fc;

void func_02038274(void) {
    if (M2C_FIELD(&data_0215de14, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0215de14, u16 *, 0) = 1U;
    func_02038258(0);
    M2C_FIELD(&data_0215de14, s32 *, 8)       = 0;
    M2C_FIELD(&data_0215de14, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_0203648c(8, &func_020382fc);
    func_0203665c(8);
    M2C_FIELD(&data_0215de14, s32 *, 4) = 0;
}
