#include "m2c.h"

M2C_UNK func_02030d1c(void *);                      /* extern */
M2C_UNK func_0203342c(void *);                      /* extern */
M2C_UNK func_02005380(M2C_UNK *);                   /* extern */
M2C_UNK func_02005404(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020da0f0;
extern M2C_UNK data_020da768;

void func_02033698(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_02005380(&data_020da768);
    if (M2C_FIELD(&data_020da0f0, s32 *, 4) != 0) {
        func_02005380(M2C_FIELD(&data_020da0f0, s32 *, 4) + 0x4C8);
    }
    func_0203342c(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_02030d1c(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_02005404(&data_020da768);
    if (M2C_FIELD(&data_020da0f0, s32 *, 4) == 0) {
        return;
    }
    func_02005404(M2C_FIELD(&data_020da0f0, s32 *, 4) + 0x4C8);
}
