/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205af98();                            /* extern */
void *func_0205b8f4(void *);                        /* extern */

void func_0205b9d8(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x7C) == 0) {
        return;
    }
    do {
        temp_r0                      = func_0205b8f4(arg0);
        M2C_FIELD(temp_r0, s32 *, 8) = 0;
        M2C_FIELD(temp_r0, s32 *, 4) = 0;
        func_0205af98();
    } while (M2C_FIELD(arg0, s32 *, 0x7C) != 0);
}
