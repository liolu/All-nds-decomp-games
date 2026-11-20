#include "m2c.h"

M2C_UNK func_02083a64(M2C_UNK, s32);                /* extern */
s32 func_020aaa68();                                /* extern */
M2C_UNK func_020bbc80();                            /* extern */
extern M2C_UNK data_02170354;

void func_020860c0(void) {
    func_020bbc80();
    M2C_FIELD(&data_02170354, s32 *, 4) = func_020aaa68();
    func_02083a64(9, 0xFFFE8515);
    *M2C_FIELD(&data_02170354, s32 **, 0) = 0;
}
