#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_02011110(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK data_02187040;
extern M2C_UNK func_020d3a44;

s32 func_020d3a00(void) {
    func_020d2084(3);
    if (func_02011110(&data_02187040, &func_020d3a44, 2) == 2) {
        return 1;
    }
    func_020d2104();
    func_020d2084(0xA);
    return 0;
}
