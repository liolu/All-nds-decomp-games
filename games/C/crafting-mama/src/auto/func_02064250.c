#include "m2c.h"

M2C_UNK func_02047d74(s32, s32, s16, s16, s32);     /* extern */

void func_02064250(void *arg0) {
    s32 temp_r1;

    func_02047d74(M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s16 *, 0x30),
                  M2C_FIELD(arg0, s16 *, 0x32), (s32) M2C_FIELD(arg0, s16 *, 0x34));
    func_02047d74(M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s16 *, 0x30),
                  M2C_FIELD(arg0, s16 *, 0x32), -1);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_r1 != 0) {
        func_02047d74(M2C_FIELD(arg0, s32 *, 0x48), temp_r1, M2C_FIELD(arg0, s16 *, 0x40), M2C_FIELD(arg0, s16 *, 0x42),
                      (s32) M2C_FIELD(arg0, s16 *, 0x44));
    }
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x58) + ((M2C_FIELD(arg0, s16 *, 0x5C) - 1) * 4)), s32 *, 0x4C) = 0;
}
