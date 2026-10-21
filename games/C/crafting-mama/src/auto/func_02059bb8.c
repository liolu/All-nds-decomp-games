#include "m2c.h"

M2C_UNK func_02018850(M2C_UNK *);                   /* extern */
M2C_UNK func_020188a0(M2C_UNK *);                   /* extern */
M2C_UNK func_02057fc4(void *);                      /* extern */
M2C_UNK func_02059c50(void *);                      /* extern */
extern M2C_UNK data_020b0ab0;
extern M2C_UNK data_020b2198;

void func_02059bb8(void *arg0) {
    func_02018850(&data_020b2198);
    if (M2C_FIELD(&data_020b0ab0, s32 *, 4) != 0) {
        func_02018850(M2C_FIELD(&data_020b0ab0, s32 *, 4) + 0x10C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1E) >> 0x1F) != 0) {
        func_02057fc4(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x178)(arg0);
    }
    func_02059c50(arg0);
    func_020188a0(&data_020b2198);
    if (M2C_FIELD(&data_020b0ab0, s32 *, 4) == 0) {
        return;
    }
    func_020188a0(M2C_FIELD(&data_020b0ab0, s32 *, 4) + 0x10C8);
}
