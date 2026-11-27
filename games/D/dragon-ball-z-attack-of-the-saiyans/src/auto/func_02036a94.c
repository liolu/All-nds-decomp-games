#include "m2c.h"

M2C_UNK func_020082c0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0200afd0(s32, s32 *, s32 *, M2C_UNK);  /* extern */
s32 func_0200b018(s32);                             /* extern */
M2C_UNK func_0202bc74(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0202bd94(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020d6384;

void func_02036a94(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    s32 sp4;
    s32 sp0;
    s32 temp_r4;

    temp_r4 = *((M2C_UNK *) ((s8 *) &data_020d6384 + (arg2 * 4)));
    func_020082c0(arg1, temp_r4, -1);
    func_0200afd0(temp_r4, &sp4, &sp0, arg3);
    func_0202bc74(arg0 + 4, func_0200b018(temp_r4) - 4, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = sp4;
    M2C_FIELD(arg0, s32 *, 0x20) = sp0;
    func_0202bd94(arg0 + 4, 0);
}
