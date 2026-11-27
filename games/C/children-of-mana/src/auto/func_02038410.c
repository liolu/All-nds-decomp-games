/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b924(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209625c(s32, M2C_UNK);                /* extern */

void func_02038410(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x558);
    if (temp_r4 == NULL) {
        return;
    }
    M2C_FIELD(arg0, void **, 0x558) = NULL;
    func_0209625c(M2C_FIELD(temp_r4, s32 *, 0x44), 1);
    func_0207b924(temp_r4, 0);
}
