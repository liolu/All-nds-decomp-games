#include "m2c.h"

M2C_UNK func_020d44a8(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020d46ac(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020c23f4();                            /* extern */
M2C_UNK func_020c2528(s32, s32 *, s32);             /* extern */
extern s32 data_02110ca0;
extern M2C_UNK data_021dd424;
extern M2C_UNK data_021dd428;
extern M2C_UNK func_020c2468;

void func_020c2474(s32 *arg0, u32 arg1) {
    if ((arg1 < 0x100U) || (data_02110ca0 == -1)) {
        func_020c2528(*arg0, ((s8 *) arg0 + 4), (arg1 >> 2) - 1);
        return;
    }
    func_020c23f4();
    M2C_FIELD(&data_021dd424, s32 *, 4) = 1;
    if (M2C_FIELD(&data_021dd424, s32 *, 8) != 0) {
        func_020d46ac(data_02110ca0, arg0, arg1, &func_020c2468, &data_021dd428);
        return;
    }
    func_020d44a8(data_02110ca0, arg0, arg1, &func_020c2468, &data_021dd428);
}
