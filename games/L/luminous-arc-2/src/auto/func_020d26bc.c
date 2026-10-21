#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_0201298c(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_021851a0;

s32 func_020d26bc(void) {
    func_020d2084(6);
    if (func_0201298c(&data_021851a0, 0xD) == 0) {
        return 1;
    }
    func_020d2104();
    return 0;
}
