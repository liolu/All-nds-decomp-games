/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033f88();                            /* extern */
M2C_UNK func_02047388();                            /* extern */

void func_02047424(void *arg0, s32 arg1) {
    if (((u32) (M2C_FIELD(arg0, u8 *, 0x15C) << 0x1C) >> 0x1F) != 0) {
        func_02047388(arg0, arg1);
        return;
    }
    func_02033f88(arg0, arg1);
}
