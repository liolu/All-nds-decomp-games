/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 _ZN10__cmd_wait5isEndEv(s32);                   /* extern */
s32 func_0201b728(void *);                          /* extern */
s32 func_0201e150(void *);                          /* extern */
s32 func_02038174(void *);                          /* extern */
s32 func_02038198();                                /* extern */
M2C_UNK func_0204ae70(s32, s32);                    /* extern */
M2C_UNK func_0204ae90(s32, s32);                    /* extern */

void func_02036618(void *arg0) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
    if ((func_02038198() != 2) || (_ZN10__cmd_wait5isEndEv(M2C_FIELD(arg0, s32 *, 0x54C)) != 0) ||
        (func_02038174(arg0) == 0) || ((func_0201b728(arg0) == 0) && (M2C_FIELD(arg0, s32 *, 0x70) != 2))) {
        var_r4 = 1;
    }
    if ((var_r4 != 0) && (M2C_FIELD(arg0, s32 *, 0x530) != 0)) {
        func_0204ae70(M2C_FIELD(arg0, s32 *, 0x530), func_0201e150(arg0));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x530);
    if (temp_r0 == 0) {
        return;
    }
    func_0204ae90(temp_r0, var_r4);
}
