/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020585a4();                            /* extern */
M2C_UNK func_020585f0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02058664();                            /* extern */
M2C_UNK func_0205876c();                            /* extern */
M2C_UNK func_020587c4(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02058838();                            /* extern */
M2C_UNK func_02059294(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020592fc(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02059428();                            /* extern */
M2C_UNK func_02059480(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020594f4();                            /* extern */
M2C_UNK func_0205bba4(s32, s32);                    /* extern */
M2C_UNK func_020664c0(void *, s32, M2C_UNK);        /* extern */

void func_02065f0c(void *arg0, M2C_UNK arg1, s32 arg2, void *arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, volatile s32 *, 0xC);
    temp_r4 = M2C_FIELD(arg0, volatile s32 *, 8);
    func_0205bba4(temp_r5, temp_r4);
    switch (arg2) {                                 /* irregular */
        case 1:
            if (M2C_FIELD(arg0, volatile s32 *, 4) != 0) {
                func_02058838();
                func_020587c4(temp_r5, arg1, temp_r4);
                func_0205876c();
            } else {
                func_020592fc(temp_r5, arg1, temp_r4);
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, volatile s32 *, 4) != 0) {
                func_02058664();
                func_020585f0(temp_r5, arg1, temp_r4);
                func_020585a4();
            } else {
                func_02059294(temp_r5, arg1, temp_r4);
            }
            break;
        case 0:
            func_020594f4();
            func_02059480(temp_r5, arg1, temp_r4);
            func_02059428();
            break;
    }
    M2C_FIELD(arg3, volatile s32 *, 0) = (s32) M2C_FIELD(arg0, volatile s32 *, 0);
    M2C_FIELD(arg3, volatile s32 *, 4) = (s32) M2C_FIELD(arg0, volatile s32 *, 4);
    func_020664c0(arg3, arg2, arg1);
}
