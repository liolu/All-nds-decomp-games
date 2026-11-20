#include "m2c.h"

M2C_UNK func_020228e0(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_0202285c(void *arg0) {
    s16 temp_r1;

    func_020228e0(arg0 + (M2C_FIELD(arg0, s16 *, 0x40C) * 8), M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x414),
                  M2C_FIELD(arg0, s32 *, 0x418), M2C_FIELD(arg0, s32 *, 0x400), M2C_FIELD(arg0, s32 *, 0x424),
                  M2C_FIELD(arg0, s32 *, 0x41C), M2C_FIELD(arg0, s32 *, 0x420), M2C_FIELD(arg0, s32 *, 0x404),
                  M2C_FIELD(arg0, s32 *, 0x428), M2C_FIELD(arg0, s32 *, 0x42C), M2C_FIELD(arg0, s32 *, 0x430));
    temp_r1 = M2C_FIELD(arg0, s16 *, 0x40C);
    if ((s32) temp_r1 < 0x80) {
        M2C_FIELD(arg0, s16 *, 0x40C) = (s16) (temp_r1 + 1);
    }
}
