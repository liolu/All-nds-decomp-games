/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059110(s32, s32, s32);               /* extern */
M2C_UNK func_02059170(s32, s32, s32);               /* extern */
M2C_UNK func_0205953c();                            /* extern */
M2C_UNK func_020595ac(s32, s32, s32);               /* extern */
M2C_UNK func_02059710();                            /* extern */

void func_0204023c(void *arg0) {
    s32 temp_r1;
    s32 temp_r4;
    void *temp_r5;

    temp_r1 = M2C_FIELD(arg0, volatile s32 *, 0);
    temp_r5 = M2C_FIELD(arg0, void **, 4);
    temp_r4 = M2C_FIELD(arg0, volatile s32 *, 0x20);
    switch (temp_r1) {                              /* irregular */
        case 2:
            func_02059710();
            func_020595ac(M2C_FIELD(temp_r5, volatile s32 *, 0x14), temp_r4, M2C_FIELD(temp_r5, volatile s32 *, 0x10));
            func_0205953c();
            return;
        case 0:
            func_02059170(M2C_FIELD(temp_r5, volatile s32 *, 0x14), temp_r4, M2C_FIELD(temp_r5, volatile s32 *, 0x10));
            return;
        case 1:
            func_02059110(M2C_FIELD(temp_r5, volatile s32 *, 0x14), temp_r4, M2C_FIELD(temp_r5, volatile s32 *, 0x10));
            return;
    }
}
