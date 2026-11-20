#include "m2c.h"

M2C_UNK func_020293f8(void **);                     /* extern */
void *func_02029490();                              /* extern */
s32 func_0205d4a4(s32);                             /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */

void func_02065f08(void) {
    void *sp0;
    void *temp_r0;

    temp_r0 = func_02029490();
    sp0     = temp_r0;
    if (func_0205d4a4(M2C_FIELD(temp_r0, s32 *, 0x1C)) == 0) {
        return;
    }
    func_0205e6a8(sp0 + 0x1C);
    func_0205e6a8(sp0 + 0x20);
    func_020293f8(&sp0);
}
