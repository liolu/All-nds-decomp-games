#include "engine.h"
#include "m2c.h"

M2C_UNK func_020945e0(M2C_UNK);

s32 func_0209460c(s32 arg0) {
    u32 temp_r0;

    if ((u32) arg0 < 0x10000U) {
        return func_020945e0((s32) (u16) arg0);
    }
    temp_r0 = (u32) func_020945e0((s32) ((u32) (arg0 * 2) >> 0x10));
    if (temp_r0 < (u32) ((u32) arg0 >> 0xF)) {
        return func_020945e0(0x7FFF) | (temp_r0 << 0xF);
    }
    return func_020945e0((s32) (u16) (arg0 & 0x7FFF)) | (temp_r0 << 0xF);
}
