#include "m2c.h"

void *func_02004b04(void *);                        /* extern */
M2C_UNK func_02005130();                            /* extern */

void func_02005980(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x88) == 0) {
        return;
    }
    do {
        temp_r0                        = func_02004b04(arg0 + 0x88);
        M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r0, s32 *, 8)   = 0;
        func_02005130();
    } while (M2C_FIELD(arg0, s32 *, 0x88) != 0);
}
