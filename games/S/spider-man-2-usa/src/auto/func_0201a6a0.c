/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02032eb4(s32);                            /* extern */
M2C_UNK func_0203333c(s32, s32, s32);               /* extern */
M2C_UNK func_020334d4(s32);                         /* extern */
extern s32 data_0215d690;
extern s32 data_0215d694;

void func_0201a6a0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) *func_02032eb4(data_0215d694);
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(func_02032eb4(data_0215d694), s32 *, 4);
        func_0203333c(data_0215d694, M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x50));
        func_020334d4(data_0215d694);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) *func_02032eb4(data_0215d690);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(func_02032eb4(data_0215d690), s32 *, 4);
    func_0203333c(data_0215d690, M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x50));
    func_020334d4(data_0215d690);
}
