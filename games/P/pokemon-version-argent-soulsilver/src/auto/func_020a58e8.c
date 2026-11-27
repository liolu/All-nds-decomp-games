#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a5520(M2C_UNK, M2C_UNK);
void func_020a56c0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020a57fc(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_020a58e8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    u8 temp_r0_2;

    temp_r0 = func_020a5520(arg0, arg1);
    if (temp_r0 != 0) {
        temp_r0_2 = M2C_FIELD(temp_r0, u8 *, 8);
        if (temp_r0_2 == 1) {
            func_020a57fc(arg0, arg1, temp_r0);
        } else if ((u32) (u8) (temp_r0_2 + 0xFD) <= 1U) {
            M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x28) - 1);
            func_020a57fc(arg0, arg1, temp_r0);
        } else {
            func_020a56c0(arg0, arg1, arg2, 0);
        }
        return 1;
    }
    return 0;
}
