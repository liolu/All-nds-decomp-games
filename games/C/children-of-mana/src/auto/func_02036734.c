/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02036c20(void *, s32, s32);            /* extern */
s32 func_0208ad74(M2C_UNK);                         /* extern */
s32 func_0208ad7c(M2C_UNK);                         /* extern */
M2C_UNK func_0208ad84(M2C_UNK, void *);             /* extern */

void func_02036734(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_0208ad7c(arg1);
    func_02036c20(arg0, temp_r4, func_0208ad74(arg1));
    func_0208ad84(arg1, arg0);
    M2C_FIELD(arg0, s32 *, 0x658) = 0;
}
