#include "m2c.h"

M2C_UNK func_02056d24();                            /* extern */
M2C_UNK func_020b28b4(s32, void *);                 /* extern */

void func_02056ea4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_02056d24(arg0);
    func_020b28b4(M2C_FIELD(arg0, s32 *, 8), arg0 + 0x30);
}
