#include "m2c.h"

M2C_UNK func_0206d350(M2C_UNK);                     /* extern */
M2C_UNK func_0206e76c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02070220(M2C_UNK);                     /* extern */
M2C_UNK func_02073e74();                            /* extern */
M2C_UNK func_020766a0(M2C_UNK);                     /* extern */
extern M2C_UNK data_0216e3d8;

s32 func_0206ce68(void) {
    if (M2C_FIELD(&data_0216e3d8, u8 *, 0) == 1) {
        return 0;
    }
    M2C_FIELD(&data_0216e3d8, u8 *, 0) = 1U;
    func_02073e74();
    func_0206e76c(M2C_FIELD(&data_0216e3d8, s32 *, 0x3C), 0);
    func_0206e76c(M2C_FIELD(&data_0216e3d8, s32 *, 0x40), 0);
    func_02070220(0);
    func_0206d350(0);
    func_020766a0(0);
    M2C_FIELD(&data_0216e3d8, s8 *, 0x14) = 2;
    return 0;
}
