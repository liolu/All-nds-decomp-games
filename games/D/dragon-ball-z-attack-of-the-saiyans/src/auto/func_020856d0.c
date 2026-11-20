#include "m2c.h"

M2C_UNK func_020853b4();                            /* extern */
M2C_UNK func_020854c0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0208550c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020d89f4;
extern M2C_UNK func_0208590c;

void func_020856d0(void) {
    if (M2C_FIELD(&data_020d89f4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020d89f4, u16 *, 0)    = 1U;
    M2C_FIELD(&data_020d89f4, s32 *, 12)   = 0;
    M2C_FIELD(&data_020d89f4, s32 *, 16)   = 0;
    M2C_FIELD(&data_020d89f4, s32 *, 0x28) = 0;
    M2C_FIELD(&data_020d89f4, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020d89f4, s32 *, 0x18) = 0;
    func_020853b4();
    do {

    } while (func_0208550c(5, 1) == 0);
    func_020854c0(5, &func_0208590c);
}
