#include "m2c.h"

M2C_UNK func_02083b04(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0208efa0();                            /* extern */
M2C_UNK func_02090a30(M2C_UNK);                     /* extern */
extern M2C_UNK data_021704fc;

void func_0208ab70(void) {
    func_02090a30(0);
    if (M2C_FIELD(&data_021704fc, s32 *, 8) != 0) {
        func_02083b04(4, M2C_FIELD(&data_021704fc, s32 *, 8), 0);
        M2C_FIELD(&data_021704fc, s32 *, 8) = 0;
    }
    func_0208efa0();
    if (M2C_FIELD(&data_021704fc, s32 *, 0) != 0) {
        func_02083b04(4, M2C_FIELD(&data_021704fc, s32 *, 0), 0);
        M2C_FIELD(&data_021704fc, s32 *, 0) = 0;
    }
    M2C_FIELD(&data_021704fc, s8 *, 0x1C) = 0;
    M2C_FIELD(&data_021704fc, s8 *, 0x1D) = 0;
}
