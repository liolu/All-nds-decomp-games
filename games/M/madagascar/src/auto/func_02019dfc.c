/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019da4(void *, s32);                 /* extern */
M2C_UNK func_02024770(void *, s32);                 /* extern */
extern M2C_UNK data_020be6d0;

void func_02019dfc(void *arg0, void *arg1) {
    void *temp_r5;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x1F) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 1) {
        return;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x30) != 0) &&
        (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x10) == M2C_FIELD(&data_020be6d0, s32 *, 0x10))) {
        return;
    }
    temp_r5 = M2C_FIELD(arg1, void **, 8);
    func_02024770(M2C_FIELD(arg0, void **, 0x20), *((M2C_UNK *) ((s8 *) &data_020be6d0 + (M2C_FIELD(temp_r5, s32 *, 0) * 4))));
    func_02019da4(arg0, M2C_FIELD(temp_r5, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x30) = 0x20;
}
