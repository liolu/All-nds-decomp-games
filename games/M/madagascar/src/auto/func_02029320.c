/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 *func_0207b00c(M2C_UNK);                        /* extern */
M2C_UNK func_0202a1a0(M2C_UNK, s32 *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_0207b000(s32 *);                       /* extern */
extern M2C_UNK func_02029374;

void func_02029320(M2C_UNK arg0) {
    s32 *temp_r0;

    temp_r0  = func_0207b00c(4);
    *temp_r0 = 2;
    func_0202a1a0(arg0, temp_r0, 4, &func_02029374, 0xD);
    func_0207b000(temp_r0);
}
