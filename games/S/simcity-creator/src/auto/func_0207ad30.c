/* compiler: 2.0/sp1p5 -flag no-opt_propagation */
#include "m2c.h"

s32 func_020547dc(s32);                             /* extern */
M2C_UNK func_02054998(s32, M2C_UNK);                /* extern */
M2C_UNK func_02056380(s32, u16, u16, M2C_UNK);      /* extern */
M2C_UNK func_02073b14(s32, M2C_UNK);                /* extern */

void func_0207ad30(void *arg0, void *arg1, s32 arg2) {
    u16 temp_r5;

    temp_r5 = (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg1, u16 *, 0x20)) + M2C_FIELD(arg1, u16 *, 0x1C);
    func_02056380(func_020547dc(M2C_FIELD(arg0, s32 *, 8)), (u16) (arg2 + 1), temp_r5, 4);
    func_02054998(M2C_FIELD(arg0, s32 *, 8), 6);
    func_02073b14(M2C_FIELD(arg0, s32 *, 0), 8);
}
