#include "m2c.h"

void *func_01ff8044();                              /* extern */
s32 func_02029ed4(s32, void *);                     /* extern */
M2C_UNK func_0202cb78(s32, void *);                 /* extern */
M2C_UNK func_0204ddb8(void *, M2C_UNK);             /* extern */
s32 func_0204ddd0(void *, s32);                     /* extern */
M2C_UNK func_02056534(void *, s32);                 /* extern */
M2C_UNK func_0206f048(s32);                         /* extern */
extern s32 data_020e0ba0;

void func_02051de8(void *arg0, s32 arg1) {
    s32 **temp_r0;
    s32 *temp_r0_2;

    if (arg1 != 0) {
        func_0202cb78(arg0 + 0x3A8, arg0);
        return;
    }
    if (func_0204ddd0(arg0, M2C_FIELD(func_01ff8044(), s32 *, 0x20) + 0x14) == 0) {
        return;
    }
    if (!(((u32) M2C_FIELD(arg0, u32 *, 0x70) >> 0x13) & 1)) {
        if ((func_02029ed4(data_020e0ba0, arg0) != 0) && (temp_r0 = M2C_FIELD(arg0, s32 ***, 0x1AC), (temp_r0 != NULL)) &&
            (temp_r0_2 = *temp_r0, (temp_r0_2 != NULL))) {
            func_0206f048(*temp_r0_2);
        }
    }
    if (((u32) (M2C_FIELD(arg0, s32 *, 0x3A8) << 0x19) >> 0x19) == 0) {
        func_0204ddb8(arg0, 9);
    }
    func_02056534(arg0, arg1);
}
