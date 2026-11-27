/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205c948();                                /* extern */
M2C_UNK func_0205c95c(s32);                         /* extern */
s32 func_02060d88();                                /* extern */
void *func_02060da4();                              /* extern */

s32 func_020615fc(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0205c948();
    temp_r0 = func_02060d88();
    if (temp_r0 != 0) {
        func_0205c95c(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_02060da4(), s32 *, 0xBC) = arg0;
    func_0205c95c(temp_r5);
    return 0;
}
