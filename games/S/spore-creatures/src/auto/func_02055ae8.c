#include "m2c.h"

M2C_UNK func_020568b0(void *);                      /* extern */
M2C_UNK func_020a3094(s32);                         /* extern */

void func_02055ae8(void *arg0) {
    func_020a3094(arg0 + 0x24);
    func_020a3094(arg0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x34) = 0x1000;
    func_020568b0(arg0);
}
