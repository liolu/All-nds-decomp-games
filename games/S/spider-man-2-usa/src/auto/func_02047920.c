#include "m2c.h"

void func_02047920(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x150), s32 *, 0x104);
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (0 - M2C_FIELD(M2C_FIELD(arg0, void **, 0x150), s32 *, 0x108));
    M2C_FIELD(arg0, s32 *, 0x1EC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x150), s32 *, 0x108);
    M2C_FIELD(arg0, s32 *, 0x1F0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x150), s32 *, 0x10C);
}
