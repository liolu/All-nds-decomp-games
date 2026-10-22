/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02050780();                              /* extern */
extern void *data_02160ea0;
extern s32 data_02160ea4;

void func_0205074c(void) {
    void *temp_r0;

    temp_r0       = func_02050780();
    data_02160ea0 = temp_r0;
    data_02160ea4 = (s32) M2C_FIELD(temp_r0, u16 *, 0xE);
}
