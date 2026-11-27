#include "m2c.h"

s32 func_020aded0(void *arg0) {
    s32 var_r2;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x38);
    var_r2  = 0;
    if (temp_r1 != NULL) {
        var_r2                         = *M2C_FIELD(temp_r1, s32 **, 4);
        M2C_FIELD(arg0, void **, 0x38) = (void *) M2C_FIELD(temp_r1, void **, 0xC);
    }
    return var_r2;
}
