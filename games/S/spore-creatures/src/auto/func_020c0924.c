#include "m2c.h"

M2C_UNK func_020b4924();                            /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */

void func_020c0924(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020b4924(arg0);
    }
    func_020b6be4(M2C_FIELD(arg1, s32 *, 4));
}
