#include "m2c.h"

M2C_UNK func_020626a4(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020627e8(M2C_UNK);                     /* extern */
M2C_UNK func_02064450(M2C_UNK);                     /* extern */
extern M2C_UNK data_0208e920;
extern M2C_UNK func_020644f4;

void func_0206446c(void) {
    if (M2C_FIELD(&data_0208e920, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0208e920, u16 *, 0) = 1U;
    func_02064450(0);
    M2C_FIELD(&data_0208e920, s32 *, 8)       = 0;
    M2C_FIELD(&data_0208e920, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_020626a4(8, &func_020644f4);
    func_020627e8(8);
    M2C_FIELD(&data_0208e920, s32 *, 4) = 0;
}
