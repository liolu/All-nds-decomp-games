#include "m2c.h"

M2C_UNK func_0208b6f0();                            /* extern */
M2C_UNK func_0208b950(M2C_UNK);                     /* extern */
M2C_UNK func_0208cfe4(s32, s32);                    /* extern */
extern M2C_UNK data_020af090;

void func_0200b89c(void) {
    func_0208b950(0);
    func_0208b6f0();
    func_0208cfe4(M2C_FIELD(&data_020af090, s32 *, 0), M2C_FIELD(&data_020af090, s32 *, 0x98));
}
