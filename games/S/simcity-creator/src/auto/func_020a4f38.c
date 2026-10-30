#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_02034934(s32);                         /* extern */
M2C_UNK func_02061c34(s32);                         /* extern */
M2C_UNK func_0209574c(s32);                         /* extern */
M2C_UNK func_020957d4(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b264c(s32);                         /* extern */
M2C_UNK func_020b442c(s32);                         /* extern */
M2C_UNK func_020b448c(s32, M2C_UNK);                /* extern */

void func_020a4f38(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    void **temp_r0;

    func_020b442c(M2C_FIELD(arg0, s32 *, 0x2008C));
    func_020b442c(M2C_FIELD(arg0, s32 *, 0x20090));
    func_020b448c(M2C_FIELD(arg0, s32 *, 0x2008C), 1);
    func_020b448c(M2C_FIELD(arg0, s32 *, 0x20090), 1);
    func_0209574c(M2C_FIELD(arg0, s32 *, 0x20088));
    func_020957d4(M2C_FIELD(arg0, s32 *, 0x20088), 0x4000);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x20094);
    if (temp_r5 != 0) {
        func_020b264c(temp_r5);
        func_0203491c(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x2007C);
    if (temp_r5_2 != 0) {
        func_02061c34(temp_r5_2);
        func_0203491c(temp_r5_2);
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x20080);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_02034934(M2C_FIELD(arg0, s32 *, 0x27200));
    func_02034934(M2C_FIELD(arg0, s32 *, 0x27204));
    func_02034934(M2C_FIELD(arg0, s32 *, 0x27208));
}
