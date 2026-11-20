/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001f04(s32);                             /* extern */
M2C_UNK func_02006c08(void *);                      /* extern */
M2C_UNK func_02006d18(void *);                      /* extern */
M2C_UNK func_02038b54();                            /* extern */
s32 func_02038c6c();                                /* extern */
s32 func_02043804();                                /* extern */
M2C_UNK func_0204388c(s32, s32);                    /* extern */

void func_020068d8(void *arg0, s32 arg1) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    func_02001f04(arg1);
    if (func_02043804() != 0) {
        func_02038c6c();
        func_02038b54();
        func_02006d18(arg0);
        return;
    }
    temp_r4 = func_02001f04(arg1);
    func_0204388c(temp_r4, func_02038c6c());
    func_02006c08(arg0);
}
