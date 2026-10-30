#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_02061c34(s32);                         /* extern */
M2C_UNK func_02069328(s32);                         /* extern */
M2C_UNK func_0206bdc8(void *);                      /* extern */
M2C_UNK func_0206bef4(void *);                      /* extern */
M2C_UNK func_020b17f4(s32);                         /* extern */
M2C_UNK func_020b264c(s32);                         /* extern */

void func_0206bb54(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r4 != 0) {
        func_020b264c(temp_r4);
        func_0203491c(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4_2 != 0) {
        func_020b17f4(temp_r4_2);
        func_0203491c(temp_r4_2);
    }
    temp_r4_3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r4_3 != 0) {
        func_02061c34(temp_r4_3);
        func_0203491c(temp_r4_3);
    }
    temp_r4_4 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r4_4 != 0) {
        func_02069328(temp_r4_4);
        func_0203491c(temp_r4_4);
    }
    func_0206bdc8(arg0);
    func_0206bef4(arg0);
}
