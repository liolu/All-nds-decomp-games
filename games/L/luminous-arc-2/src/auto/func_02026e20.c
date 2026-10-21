#include "m2c.h"

M2C_UNK func_020058a0(M2C_UNK *);                   /* extern */
M2C_UNK func_02005924(M2C_UNK *);                   /* extern */
M2C_UNK func_02025a74(void *);                      /* extern */
M2C_UNK func_02026eb8(void *);                      /* extern */
extern M2C_UNK data_0216afd0;
extern M2C_UNK data_0216b648;

void func_02026e20(void *arg0) {
    func_020058a0(&data_0216b648);
    if (M2C_FIELD(&data_0216afd0, s32 *, 4) != 0) {
        func_020058a0(M2C_FIELD(&data_0216afd0, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_02025a74(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x170)(arg0);
    }
    func_02026eb8(arg0);
    func_02005924(&data_0216b648);
    if (M2C_FIELD(&data_0216afd0, s32 *, 4) == 0) {
        return;
    }
    func_02005924(M2C_FIELD(&data_0216afd0, s32 *, 4) + 0x4C8);
}
