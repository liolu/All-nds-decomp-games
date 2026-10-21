#include "m2c.h"

void *func_02029490();                              /* extern */
s32 func_0205d4a4(s32);                             /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */

void func_0206b160(void) {
    u16 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_02029490();
    if (M2C_FIELD(temp_r0, s32 *, 0x10) == 1) {
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, u16 *, 0x20);
    switch (temp_r0_2) {                            /* irregular */
        case 0x0:
            if (func_0205d4a4(M2C_FIELD(temp_r0, s32 *, 0x1C)) == 1) {
                M2C_FIELD(temp_r0, u16 *, 0x20) = 0x63U;
            }
            return;
        case 0x63:
            func_0205e6a8(temp_r0 + 0x1C);
            M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
            return;
    }
}
