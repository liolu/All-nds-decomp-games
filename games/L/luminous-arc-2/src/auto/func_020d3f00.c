#include "m2c.h"

M2C_UNK func_02006f34();                            /* extern */
s32 func_020111d0(M2C_UNK *);                       /* extern */
M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
extern M2C_UNK data_02185160;
extern M2C_UNK func_020d34b4;

s32 func_020d3f00(void) {
    if (M2C_FIELD(&data_02185160, s32 *, 0x14) != 1) {
        func_02006f34();
    }
    func_020d2084(3);
    if (func_020111d0(&func_020d34b4) != 2) {
        func_020d2084(9);
        return 0;
    }
    M2C_FIELD(&data_02185160, s16 *, 0) = 0;
    return 1;
}
