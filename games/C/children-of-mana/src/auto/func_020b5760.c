/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020aac90();                              /* extern */
M2C_UNK func_020b07d4(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020b5760(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if (temp_r0 == NULL) {
        return;
    }
    switch (arg1) {                                 /* irregular */
        case 0:
            func_020b07d4(temp_r0, 0, 1);
            temp_r0_2 = M2C_FIELD(arg0, void **, 4);
            if (M2C_FIELD(temp_r0_2, u8 *, 0x1F1) != 0) {
                func_020b07d4(temp_r0_2, 2, 1);
            }
            M2C_FIELD(func_020aac90(), s8 *, 0x40E) = (s8) arg2;
            M2C_FIELD(func_020aac90(), s8 *, 0x40F) = arg3;
            return;
        case 1:
            func_020b07d4(temp_r0, 0, 1);
            temp_r0_3 = M2C_FIELD(arg0, void **, 4);
            if (M2C_FIELD(temp_r0_3, u8 *, 0x1F0) != 0) {
                func_020b07d4(temp_r0_3, 1, 1);
            }
            *M2C_FIELD(arg0, s32 **, 0xC) = arg2;
            return;
    }
}
