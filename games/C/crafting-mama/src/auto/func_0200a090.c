#include "m2c.h"

s32 func_0200a65c(void *);                          /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
s32 func_02021ad4(s32, M2C_UNK, s32);               /* extern */
extern void *data_02093c30;

void *func_0200a090(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r6;
    s32 var_r0;
    void *var_r7;

    temp_r6 = func_02019d04();
    var_r7  = data_02093c30;
    if (var_r7 != NULL) {
    loop_2:
        if (M2C_FIELD(var_r7, s32 *, 0x14) & 2) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if ((var_r0 != 0) && (temp_r0 = func_0200a65c(var_r7), (func_02021ad4(temp_r0, arg0, arg1) == 0)) &&
            (*(s8 *) (arg1 + temp_r0) == 0)) {

        } else {
            var_r7 = M2C_FIELD(var_r7, void **, 4);
            if (var_r7 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02019d18(temp_r6);
    return var_r7;
}