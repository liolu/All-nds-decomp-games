#include "m2c.h"

s32 func_020bbce4(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020bd9bc();                                /* extern */

s32 func_020bbd8c(M2C_UNK arg0) {
    if (func_020bd9bc() == 0) {
        return 0;
    }
    return func_020bbce4(arg0, 1, 4);
}
