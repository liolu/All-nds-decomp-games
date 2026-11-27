/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02020c94(void *);                      /* extern */
void **func_0208f93c(s32, M2C_UNK);                 /* extern */

void func_020c4fbc(void *arg0) {
    s32 temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C8);
    if (temp_r0 != 0) {
        temp_r0_2 = func_0208f93c(temp_r0, 0);
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0x4C)(temp_r0_2, 0);
        temp_r0_3 = func_0208f93c(M2C_FIELD(arg0, s32 *, 0x1C8), 1);
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0x4C)(temp_r0_3, 0);
    }
    func_02020c94(arg0);
}
