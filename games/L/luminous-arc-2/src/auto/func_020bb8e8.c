#include "m2c.h"

s32 func_020bd070();                                /* extern */
s32 func_020be37c(M2C_UNK);                         /* extern */
M2C_UNK func_020be3b8(M2C_UNK);                     /* extern */

void func_020bb8e8(M2C_UNK arg0) {
    if (func_020bd070() == 0) {
        return;
    }
    if (func_020be37c(arg0) == 0) {
        return;
    }
    func_020be3b8(arg0);
}
