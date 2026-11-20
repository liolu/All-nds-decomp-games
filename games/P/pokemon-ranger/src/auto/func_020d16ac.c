/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c8070();                                /* extern */
M2C_UNK func_020c8084(s32);                         /* extern */
s32 func_020d0e2c();                                /* extern */
void *func_020d0e48();                              /* extern */

s32 func_020d16ac(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020c8070();
    temp_r0 = func_020d0e2c();
    if (temp_r0 != 0) {
        func_020c8084(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020d0e48(), s32 *, 0xBC) = arg0;
    func_020c8084(temp_r5);
    return 0;
}
