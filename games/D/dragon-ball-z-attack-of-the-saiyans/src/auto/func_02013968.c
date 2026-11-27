#include "m2c.h"

M2C_UNK func_02013168();                            /* extern */
M2C_UNK func_02013544(void *);                      /* extern */

void func_02013968(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    func_02013168(arg0, arg1, arg2);
    func_02013544(arg0);
}
