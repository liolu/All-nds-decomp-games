/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02069dec();                              /* extern */
extern void *data_020ddf60;
extern s32 data_020ddf64;

void func_02069db8(void) {
    void *temp_r0;

    temp_r0       = func_02069dec();
    data_020ddf60 = temp_r0;
    data_020ddf64 = (s32) M2C_FIELD(temp_r0, u16 *, 0xE);
}
