/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205876c();                            /* extern */
M2C_UNK func_020587c4(s32, s32, s32);               /* extern */
M2C_UNK func_02058838();                            /* extern */
M2C_UNK func_02059294(s32, s32, s32);               /* extern */
M2C_UNK func_020592fc(s32, s32, s32);               /* extern */
M2C_UNK func_02059428();                            /* extern */
M2C_UNK func_02059480(s32, s32, s32);               /* extern */
M2C_UNK func_020594f4();                            /* extern */

void func_02040130(void *arg0) {
    s32 temp_r1;
    s32 temp_r4;
    void *temp_r5;

    temp_r1 = M2C_FIELD(arg0, volatile s32 *, 0);
    temp_r5 = M2C_FIELD(arg0, void **, 8);
    temp_r4 = M2C_FIELD(arg0, volatile s32 *, 0x24);
    switch (temp_r1) {                              /* irregular */
        case 2:
            func_020594f4();
            func_02059480(M2C_FIELD(temp_r5, volatile s32 *, 0xC), temp_r4, M2C_FIELD(temp_r5, volatile s32 *, 8));
            func_02059428();
            return;
        case 0:
            if (M2C_FIELD(temp_r5, volatile s32 *, 4) != 0) {
                func_02058838();
                func_020587c4(M2C_FIELD(temp_r5, volatile s32 *, 0xC), temp_r4, M2C_FIELD(temp_r5, volatile s32 *, 8));
                func_0205876c();
                return;
            }
            func_020592fc(M2C_FIELD(temp_r5, volatile s32 *, 0xC), temp_r4, M2C_FIELD(temp_r5, volatile s32 *, 8));
            return;
        case 1:
            func_02059294(M2C_FIELD(temp_r5, volatile s32 *, 0xC), temp_r4, M2C_FIELD(temp_r5, volatile s32 *, 8));
            return;
    }
}
