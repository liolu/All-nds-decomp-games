/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b924(void *, void *);              /* extern */
M2C_UNK func_0209625c(s32, M2C_UNK);                /* extern */

void func_0203844c(void *arg0, void *arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x558);
    if (temp_r0 != NULL) {
        func_0207b924(temp_r0, NULL);
        M2C_FIELD(arg0, void **, 0x558) = NULL;
    }
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg0, void **, 0x558) = arg1;
    func_0207b924(M2C_FIELD(arg0, void **, 0x558), arg0);
    func_0209625c(M2C_FIELD(M2C_FIELD(arg0, void **, 0x558), s32 *, 0x44), 0);
}
