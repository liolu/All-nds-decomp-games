/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020220c0();                            /* extern */
void *func_02022724(void *);                        /* extern */

void func_02022c7c(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x88) == 0) {
        return;
    }
    do {
        temp_r0                        = func_02022724(arg0 + 0x88);
        M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r0, s32 *, 8)   = 0;
        func_020220c0();
    } while (M2C_FIELD(arg0, s32 *, 0x88) != 0);
}
