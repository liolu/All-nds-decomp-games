#include "m2c.h"

M2C_UNK func_020aa020();                            /* extern */
M2C_UNK func_020a6608(void *);                      /* extern */
M2C_UNK func_020a7e1c(void *);                      /* extern */
M2C_UNK func_020a8890();                            /* extern */

void func_020a88f4(void *arg0) {
    func_020a8890();
    func_020a7e1c(arg0);
    func_020a6608(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_020aa020();
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
