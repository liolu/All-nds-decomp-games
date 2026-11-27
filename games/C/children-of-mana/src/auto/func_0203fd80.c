/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020294fc(void *);                      /* extern */
M2C_UNK func_02040008();                            /* extern */

void func_0203fd80(void *arg0) {
    s32 temp_r0;

    func_02040008();
    if (M2C_FIELD(arg0, s32 *, 0x24) == -1) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 2:
            func_020294fc(arg0);
            break;
        case 0:
        case 1:
            func_020294fc(arg0);
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
