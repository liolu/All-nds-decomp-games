#include "m2c.h"

M2C_UNK func_0206d354(M2C_UNK);                     /* extern */
M2C_UNK func_0206e7cc(s32, M2C_UNK);                /* extern */
M2C_UNK func_02070260(M2C_UNK);                     /* extern */
M2C_UNK func_02073e08();                            /* extern */
extern M2C_UNK data_0216e3d8;

s32 func_0206cedc(M2C_UNK arg0) {
    if (M2C_FIELD(&data_0216e3d8, u8 *, 0) == 0) {
        return 0;
    }
    M2C_FIELD(&data_0216e3d8, s8 *, 0x14) = 1;
    func_0206e7cc(M2C_FIELD(&data_0216e3d8, s32 *, 0x3C), arg0);
    func_0206e7cc(M2C_FIELD(&data_0216e3d8, s32 *, 0x40), arg0);
    func_02070260(arg0);
    func_0206d354(arg0);
    M2C_FIELD(&data_0216e3d8, u8 *, 0) = 0U;
    func_02073e08();
    return 0;
}
