#include "m2c.h"

M2C_UNK func_02007558(s32, s32, M2C_UNK);           /* extern */
s32 func_020cd6dc(M2C_UNK *, u16);                  /* extern */
M2C_UNK func_020cf720(s32);                         /* extern */
extern M2C_UNK data_020f0e10;

void func_02047a44(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_020cd6dc(&data_020f0e10, (u16) (arg0 - 1));
    func_02007558(temp_r0, (arg1 << 9) + 0x06408000, 0x200);
    func_020cf720(temp_r0);
}
