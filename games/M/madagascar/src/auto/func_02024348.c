/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024264(void *, void *, void *, s32, s32); /* extern */
M2C_UNK func_02048598(void *);                      /* extern */
M2C_UNK func_020485a4(void *);                      /* extern */
extern M2C_UNK data_02082848;

void func_02024348(void *arg0, void *arg1, s32 arg2) {
    s8 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        return;
    }
    func_02048598(arg0 + 0xC);
    func_020485a4(arg0 + 0xC);
    func_02024264(arg0, arg1, arg0 + 0xC, M2C_FIELD(arg0, s32 *, 0x38), arg2);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    if (arg1 != &data_02082848) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3C) = var_r0;
}
