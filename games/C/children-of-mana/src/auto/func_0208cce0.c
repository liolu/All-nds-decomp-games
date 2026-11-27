/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208c734();                            /* extern */
s32 func_0208c98c(void *, M2C_UNK, s8 *, M2C_UNK, s32); /* extern */
M2C_UNK func_0208cd64(void *, M2C_UNK);             /* extern */
M2C_UNK func_0208cda4();                            /* extern */

s32 func_0208cce0(void *arg0, M2C_UNK arg1, s8 *arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r6;

    if (*arg2 == 0) {
        func_0208c734(arg0, arg1);
        return M2C_FIELD(arg0, s32 *, 0x284);
    }
    if (M2C_FIELD(arg0, u8 *, 0x2AA) == 0) {
        func_0208cda4(arg0, arg1);
    }
    temp_r6 = func_0208c98c(arg0, arg1, arg2, arg3, arg4);
    func_0208cd64(arg0, arg1);
    return temp_r6;
}
