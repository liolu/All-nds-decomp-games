#include "m2c.h"

void *func_02029490();                              /* extern */
s32 func_0205d4a4(s32);                             /* extern */
M2C_UNK func_0205e6a8(s32 *);                       /* extern */

void func_0202f664(void) {
    void *temp_r0;

    temp_r0 = func_02029490();
    if (func_0205d4a4(*M2C_FIELD(temp_r0, s32 **, 0x1C)) == 0) {
        return;
    }
    func_0205e6a8(M2C_FIELD(temp_r0, s32 **, 0x1C));
    M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
}
