/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ccfe0(void *, void *);              /* extern */
extern s32 data_021d43d8;

void func_0209df48(void *arg0) {
    s32 temp_lr;
    s32 temp_r2;

    temp_lr                   = (data_021d43d8 * 0x5EEDF715) + 0x1B0CB173;
    data_021d43d8             = temp_lr;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_lr >> 8);
    temp_r2                   = (data_021d43d8 * 0x5EEDF715) + 0x1B0CB173;
    data_021d43d8             = temp_r2;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r2 >> 8);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_020ccfe0(arg0, arg0);
}
