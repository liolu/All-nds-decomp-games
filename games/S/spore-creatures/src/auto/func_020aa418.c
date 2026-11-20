#include "m2c.h"

void *func_020a8f18();                              /* extern */
M2C_UNK func_020a9e20(void *, s32);                 /* extern */

void *func_020aa418(void *arg0) {
    void *temp_r0;

    temp_r0 = func_020a8f18();
    func_020a9e20(arg0, M2C_FIELD(temp_r0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(temp_r0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(temp_r0, s32 *, 0x10);
    return temp_r0 + 0x14;
}
