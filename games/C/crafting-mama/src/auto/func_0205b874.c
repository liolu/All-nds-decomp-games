#include "m2c.h"

M2C_UNK func_020293f8(void **);                     /* extern */
void *func_02029490();                              /* extern */
s32 func_0205d4a4(s32);                             /* extern */
M2C_UNK func_0205e9d4(s32, s16, s16, s16);          /* extern */

void func_0205b874(void) {
    void *sp0;
    void *temp_r0;

    temp_r0 = func_02029490();
    sp0     = temp_r0;
    if (M2C_FIELD(temp_r0, s32 *, 0x10) != 0) {
        return;
    }
    func_0205e9d4(M2C_FIELD(temp_r0, s32 *, 0x2C), M2C_FIELD(temp_r0, s16 *, 0x20), M2C_FIELD(temp_r0, s16 *, 0x22),
                  M2C_FIELD(temp_r0, s16 *, 0x24));
    if (func_0205d4a4(M2C_FIELD(sp0, s32 *, 0x2C)) != 1) {
        return;
    }
    func_020293f8(&sp0);
}
