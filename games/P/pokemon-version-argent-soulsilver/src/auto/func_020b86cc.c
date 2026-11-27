#include "m2c.h"

M2C_UNK func_020b806c(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_020cfd18(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020cfd70(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020d067c();                            /* extern */
M2C_UNK func_020d06c4(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020d0730();                            /* extern */
M2C_UNK func_020d0830();                            /* extern */
M2C_UNK func_020d0848(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020d08ac();                            /* extern */
M2C_UNK func_020d0ad4();                            /* extern */
M2C_UNK func_020d0b08(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020d0b74();                            /* extern */
M2C_UNK func_020d2894(s32, s32);                    /* extern */

void func_020b86cc(void *arg0, M2C_UNK arg1, s32 arg2, void *arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    func_020d2894(temp_r4, temp_r5);
    switch (arg2) {                                 /* irregular */
        case 1:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_020d067c();
                func_020d06c4(temp_r4, arg1, temp_r5);
                func_020d0730();
            } else {
                func_020cfd18(temp_r4, arg1, temp_r5);
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_020d0830();
                func_020d0848(temp_r4, arg1, temp_r5);
                func_020d08ac();
            } else {
                func_020cfd70(temp_r4, arg1, temp_r5);
            }
            break;
        case 0:
            func_020d0ad4();
            func_020d0b08(temp_r4, arg1, temp_r5);
            func_020d0b74();
            break;
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    func_020b806c(arg3, arg2, arg1);
}
