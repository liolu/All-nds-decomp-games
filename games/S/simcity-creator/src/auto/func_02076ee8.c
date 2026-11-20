#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_0207751c(s32);                         /* extern */
M2C_UNK func_02077ab0(s32);                         /* extern */
M2C_UNK func_0207a020(s32);                         /* extern */
M2C_UNK func_0207b21c(s32);                         /* extern */
M2C_UNK func_0207b490(s32);                         /* extern */
M2C_UNK func_0207b708(s32);                         /* extern */
M2C_UNK func_0207d0fc(s32);                         /* extern */
M2C_UNK func_0207dfec(s32);                         /* extern */
M2C_UNK func_0207ec00(s32);                         /* extern */
M2C_UNK func_0207eed8(s32);                         /* extern */

void func_02076ee8(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_7;
    s32 temp_r5_8;
    s32 temp_r5_9;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0xBC);
    if (temp_r5 != 0) {
        func_0207dfec(temp_r5);
        func_0203491c(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0xC0);
    if (temp_r5_2 != 0) {
        func_02077ab0(temp_r5_2);
        func_0203491c(temp_r5_2);
    }
    temp_r5_3 = M2C_FIELD(arg0, s32 *, 0xC4);
    if (temp_r5_3 != 0) {
        func_0207a020(temp_r5_3);
        func_0203491c(temp_r5_3);
    }
    temp_r5_4 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r5_4 != 0) {
        func_0207d0fc(temp_r5_4);
        func_0203491c(temp_r5_4);
    }
    temp_r5_5 = M2C_FIELD(arg0, s32 *, 0xCC);
    if (temp_r5_5 != 0) {
        func_0207751c(temp_r5_5);
        func_0203491c(temp_r5_5);
    }
    temp_r5_6 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r5_6 != 0) {
        func_0207b708(temp_r5_6);
        func_0203491c(temp_r5_6);
    }
    temp_r5_7 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_r5_7 != 0) {
        func_0207b21c(temp_r5_7);
        func_0203491c(temp_r5_7);
    }
    temp_r5_8 = M2C_FIELD(arg0, s32 *, 0xD8);
    if (temp_r5_8 != 0) {
        func_0207b490(temp_r5_8);
        func_0203491c(temp_r5_8);
    }
    temp_r5_9 = M2C_FIELD(arg0, s32 *, 0xDC);
    if (temp_r5_9 != 0) {
        func_0207ec00(temp_r5_9);
        func_0203491c(temp_r5_9);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xE0);
    if (temp_r4 == 0) {
        return;
    }
    func_0207eed8(temp_r4);
    func_0203491c(temp_r4);
}
