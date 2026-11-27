/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210cbd0;

void func_020dae30(void *arg0, s8 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 == 3) || (temp_r0 == 6)) {
        M2C_FIELD(arg0, s32 *, 4)    = 2;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s8 *, 0x1C)  = arg1;
        return;
    }
    func_0200e8c8(&data_0210cbd0);
    M2C_FIELD(arg0, s8 *, 0x4D) = 1;
}
