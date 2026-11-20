#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_02011210(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_02186560;
extern M2C_UNK func_020d2168;

s32 func_020d2128(void) {
    func_020d2084(3);
    if (func_02011210(&func_020d2168, &data_02186560) == 2) {
        return 1;
    }
    func_020d2104();
    func_020d2084(9);
    return 0;
}
