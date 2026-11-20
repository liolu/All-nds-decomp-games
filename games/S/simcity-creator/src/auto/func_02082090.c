#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_0207f2a4(s32);                         /* extern */
M2C_UNK func_0207f398();                            /* extern */
M2C_UNK func_02080f6c(s32);                         /* extern */
M2C_UNK func_02080fa4();                            /* extern */
M2C_UNK func_02086fd0(s32);                         /* extern */
M2C_UNK func_020870f8();                            /* extern */
M2C_UNK func_02089d88(s32);                         /* extern */
M2C_UNK func_02089de8();                            /* extern */
M2C_UNK func_0208aa88(s32);                         /* extern */
M2C_UNK func_0208abb4();                            /* extern */

void func_02082090(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_02080fa4();
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r5 != 0) {
            func_02080f6c(temp_r5);
            func_0203491c(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0208abb4();
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r5_2 != 0) {
            func_0208aa88(temp_r5_2);
            func_0203491c(temp_r5_2);
        }
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_02089de8();
        temp_r5_3 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_r5_3 != 0) {
            func_02089d88(temp_r5_3);
            func_0203491c(temp_r5_3);
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_0207f398();
        temp_r5_4 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_r5_4 != 0) {
            func_0207f2a4(temp_r5_4);
            func_0203491c(temp_r5_4);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        func_020870f8();
        temp_r5_5 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_r5_5 != 0) {
            func_02086fd0(temp_r5_5);
            func_0203491c(temp_r5_5);
        }
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
