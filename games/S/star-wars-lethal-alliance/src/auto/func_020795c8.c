/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02067278();                                /* extern */
M2C_UNK func_0206728c(s32);                         /* extern */
void *func_0207a248(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_0207a260(M2C_UNK, void *);             /* extern */

void *func_020795c8(M2C_UNK arg0) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r1;

    temp_r5 = func_02067278();
    temp_r0 = func_0207a248(arg0, 0);
    if (temp_r0 != NULL) {
        func_0207a260(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_0206728c(temp_r5);
    return temp_r0;
}
