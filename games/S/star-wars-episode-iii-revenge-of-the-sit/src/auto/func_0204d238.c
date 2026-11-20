/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02043cc0(u16 *, M2C_UNK);              /* extern */
s32 func_0204d294();                                /* extern */
extern void *data_020b28ec;

s32 func_0204d238(void) {
    s32 temp_r0;

    temp_r0 = func_0204d294();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02043cc0(M2C_FIELD(data_020b28ec, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_020b28ec, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
