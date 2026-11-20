/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063010(u16 *, M2C_UNK);              /* extern */
s32 func_0206b228();                                /* extern */
extern void *data_020de1ac;

s32 func_0206b1cc(void) {
    s32 temp_r0;

    temp_r0 = func_0206b228();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02063010(M2C_FIELD(data_020de1ac, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_020de1ac, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
