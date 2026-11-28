#include "m2c.h"

M2C_UNK func_0209cd6c(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0209cf00(void *);                      /* extern */

void func_0209cec8(void *arg0) {
    M2C_UNK sp0;
    void *temp_r0;

    func_0209cd6c(&sp0, arg0 + 0xC);
    temp_r0 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r0 != NULL) {
        M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(temp_r0, void **, 4);
    }
    func_0209cf00(arg0);
}
