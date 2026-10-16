/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 *func_0207b00c(M2C_UNK);                        /* extern */
M2C_UNK func_0202a394(M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207b000(s32 *);                       /* extern */

void func_020293ec(M2C_UNK arg0) {
    s32 *temp_r0;

    temp_r0  = func_0207b00c(4);
    *temp_r0 = 1;
    func_0202a394(arg0, temp_r0, 4, 0, 0xD);
    func_0207b000(temp_r0);
}
