#include "m2c.h"

M2C_UNK func_020d2618(M2C_UNK *);                   /* extern */
M2C_UNK func_020d269c(M2C_UNK *);                   /* extern */
M2C_UNK func_020c8d6c(void *);                      /* extern */
M2C_UNK func_020cad68(void *);                      /* extern */
extern M2C_UNK data_021e0970;
extern M2C_UNK data_021e0fe8;

void func_020cacd0(void *arg0) {
    func_020d2618(&data_021e0fe8);
    if (M2C_FIELD(&data_021e0970, s32 *, 4) != 0) {
        func_020d2618(M2C_FIELD(&data_021e0970, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_020c8d6c(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x170)(arg0);
    }
    func_020cad68(arg0);
    func_020d269c(&data_021e0fe8);
    if (M2C_FIELD(&data_021e0970, s32 *, 4) == 0) {
        return;
    }
    func_020d269c(M2C_FIELD(&data_021e0970, s32 *, 4) + 0x4C8);
}
