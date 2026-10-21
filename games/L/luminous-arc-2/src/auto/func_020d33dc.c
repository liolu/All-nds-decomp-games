#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
M2C_UNK func_020d3d70();                            /* extern */
s32 func_02011730(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK func_020d3414;

s32 func_020d33dc(void) {
    func_020d2084(3);
    if (func_02011730(&func_020d3414, 0) == 2) {
        return 1;
    }
    func_020d2104();
    func_020d3d70();
    return 0;
}
