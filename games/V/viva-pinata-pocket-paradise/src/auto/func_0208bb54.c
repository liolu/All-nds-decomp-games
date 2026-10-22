#include "m2c.h"

M2C_UNK func_0208d898();                            /* extern */
M2C_UNK func_0208d94c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0208d998(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020d3f68;
extern M2C_UNK func_0208bba8;

void func_0208bb54(void) {
    if (M2C_FIELD(&data_020d3f68, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_020d3f68, u16 *, 2) = 1U;
    func_0208d898();
    do {

    } while (func_0208d998(0xC, 1) == 0);
    func_0208d94c(0xC, &func_0208bba8);
}
