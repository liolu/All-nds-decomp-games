#include "m2c.h"

M2C_UNK func_0201d008(s32, s32);                    /* extern */
s32 func_02053418(s32);                             /* extern */
s32 func_0205369c(s32 *);                           /* extern */

void func_02047784(void *arg0, s32 *arg1) {
    s32 temp_r4;

    temp_r4 = func_02053418(*arg1);
    func_0201d008(temp_r4, func_0205369c(arg1));
    M2C_FIELD(arg0, s32 *, 4) = 4;
}
