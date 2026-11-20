#include "m2c.h"

M2C_UNK func_020cad18(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_ov003_022008d0();                          /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bc68;

void func_02052344(void) {
    if (func_ov003_022008d0() != 0) {
        M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
        func_020cad18(3, 1, 8);
        return;
    }
    if (M2C_FIELD(&data_0216bc68, u8 *, 6) != 0) {
        M2C_FIELD(&data_02158048, u8 *, 1) = 7U;
    }
}
