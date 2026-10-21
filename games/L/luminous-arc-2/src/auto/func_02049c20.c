#include "m2c.h"

s32 func_02043514(s32);                             /* extern */
s32 func_02049be4();                                /* extern */
extern M2C_UNK data_02181cd4;

s32 func_02049c20(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = arg0;
    temp_r0 = func_02049be4();
    if (temp_r0 != -1) {
        var_r4 = func_02043514((0xAC * temp_r0) + (s32) &data_02181cd4);
    }
    return var_r4;
}
