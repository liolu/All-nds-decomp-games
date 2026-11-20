/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffa58c();                 /* extern */
void *func_0200ea8c(); /* extern */

void func_0202fbf0(void *arg0, s32 arg1) {
    void *temp_r0;

    if (arg1 == 0) {
        return;
    }
    temp_r0 = func_0200ea8c(arg1, arg0 + 0x298, 0, 0, 0, 0, 0);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x284) = (s32) M2C_FIELD(arg0, s32 *, 0x284);
    func_01ffa58c(temp_r0, arg1);
}
