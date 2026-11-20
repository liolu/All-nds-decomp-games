#include "m2c.h"

M2C_UNK func_02005380(M2C_UNK *);                   /* extern */
M2C_UNK func_02005404(M2C_UNK *);                   /* extern */
M2C_UNK func_02030d98(void *);                      /* extern */
M2C_UNK func_020334c4(void *);                      /* extern */
extern M2C_UNK data_020da0f0;
extern M2C_UNK data_020da768;

void func_0203342c(void *arg0) {
    func_02005380(&data_020da768);
    if (M2C_FIELD(&data_020da0f0, s32 *, 4) != 0) {
        func_02005380(M2C_FIELD(&data_020da0f0, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_02030d98(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x170)(arg0);
    }
    func_020334c4(arg0);
    func_02005404(&data_020da768);
    if (M2C_FIELD(&data_020da0f0, s32 *, 4) == 0) {
        return;
    }
    func_02005404(M2C_FIELD(&data_020da0f0, s32 *, 4) + 0x4C8);
}
