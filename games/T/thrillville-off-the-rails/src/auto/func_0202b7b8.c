/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
s32 func_0202ace0();                                /* extern */
void *func_0202acfc();                              /* extern */

s32 func_0202b7b8(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02024624();
    temp_r0 = func_0202ace0();
    if (temp_r0 != 0) {
        func_02024638(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_0202acfc(), s32 *, 0xC8) = arg0;
    func_02024638(temp_r5);
    return 0;
}
