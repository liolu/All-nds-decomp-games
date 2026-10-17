/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02089e18;
extern M2C_UNK data_020d00b0;

M2C_UNK *func_02041c1c(void *arg0) {
    M2C_UNK *var_r2;

    var_r2 = &data_02089e18;
    if ((M2C_FIELD(arg0, u8 *, 0x1E4) != 0) && (M2C_FIELD(arg0, u8 *, 0x10) != 0)) {
        var_r2 = &data_020d00b0;
    }
    return var_r2;
}
