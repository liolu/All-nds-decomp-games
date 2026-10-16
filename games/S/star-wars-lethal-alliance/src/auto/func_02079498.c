/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02066180();                   /* extern */
M2C_UNK func_020661f0();                   /* extern */
M2C_UNK func_02076348();                      /* extern */
M2C_UNK func_020797f0();                      /* extern */
extern s32 data_020eb2e8;
extern M2C_UNK data_020ebb68;

void func_02079498(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_020661f0(&data_020ebb68);
    if (data_020eb2e8 != 0) {
        func_020661f0(data_020eb2e8 + 0x4C8);
    }
    func_020797f0(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_02076348(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_02066180(&data_020ebb68);
    if (data_020eb2e8 == 0) {
        return;
    }
    func_02066180(data_020eb2e8 + 0x4C8);
}
