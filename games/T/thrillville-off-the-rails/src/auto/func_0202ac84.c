/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022e10(u16 *, M2C_UNK);              /* extern */
s32 func_0202ace0();                                /* extern */
extern void *data_020eec34;

s32 func_0202ac84(void) {
    s32 temp_r0;

    temp_r0 = func_0202ace0();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02022e10(M2C_FIELD(data_020eec34, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_020eec34, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
