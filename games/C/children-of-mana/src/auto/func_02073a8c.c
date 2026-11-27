/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020738fc();                            /* extern */
extern M2C_UNK *data_020ff37c;
extern M2C_UNK *data_020ff380;
extern M2C_UNK data_0212325c;
extern M2C_UNK func_02073950;
extern M2C_UNK func_020739a8;

void func_02073a8c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_0212325c, s32 *, 8)    = arg0;
    M2C_FIELD(&data_0212325c, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_0212325c, s32 *, 0x10) = arg2;
    func_020738fc();
    if (arg3 == 0) {
        return;
    }
    data_020ff37c = &func_020739a8;
    data_020ff380 = &func_02073950;
}
