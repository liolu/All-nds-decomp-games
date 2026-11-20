#include "m2c.h"

M2C_UNK func_020aa020();                            /* extern */
M2C_UNK func_020ab30c(void *);                      /* extern */

void func_020b55f4(s32 arg0, void *arg1) {
    func_020ab30c(M2C_FIELD(arg1, void **, 0x1C));
    M2C_FIELD(arg1, void **, 0x1C) = NULL;
    func_020ab30c(M2C_FIELD(arg1, void **, 0x2C));
    M2C_FIELD(arg1, void **, 0x2C) = NULL;
    if (M2C_FIELD(arg1, s32 *, 0x3C) != 0) {
        func_020aa020();
        M2C_FIELD(arg1, s32 *, 0x3C) = 0;
    }
    func_020ab30c(arg1);
}
