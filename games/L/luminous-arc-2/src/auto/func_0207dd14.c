#include "m2c.h"

s32 func_02018ef8(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_0207ddf4(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0211c114;

s32 func_0207dd14(M2C_UNK arg0) {
    u8 sp0[24];

    func_0207ddf4(arg0, sp0);
    if (func_02018ef8(sp0, &data_0211c114, 8) == 0) {
        return 1;
    }
    return 0;
}
