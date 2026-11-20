#include "m2c.h"

M2C_UNK func_02047ca4();                            /* extern */
M2C_UNK func_02047d38(void *);                      /* extern */
M2C_UNK func_02047df4(void *);                      /* extern */
M2C_UNK func_02095404(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209574c(s32);                         /* extern */
M2C_UNK func_02095820(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b448c(s32, M2C_UNK);                /* extern */

void func_020470f4(void *arg0) {
    func_02047ca4();
    func_02047d38(arg0);
    func_02047df4(arg0);
    func_02095820(M2C_FIELD(arg0, s32 *, 0x44), 0x80);
    func_0209574c(M2C_FIELD(arg0, s32 *, 0x44));
    func_02095404(M2C_FIELD(arg0, s32 *, 0x44), 0);
    func_020b448c(M2C_FIELD(arg0, s32 *, 0x3C), 1);
}
