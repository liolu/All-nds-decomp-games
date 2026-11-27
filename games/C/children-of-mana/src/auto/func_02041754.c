/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203fd04(void *);                      /* extern */
M2C_UNK func_0203fd80(void *);                      /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */

void func_02041754(void *arg0) {
    s32 temp_r0;

    func_0209304c(0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x160);
    switch (temp_r0) {                              /* irregular */
        case 0:
        case 1:
            func_0203fd04(arg0 + 0x10);
        /* fallthrough */
        case 2:
            func_0203fd80(arg0 + 0x160);
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) & ~0x20);
}
