/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02044a40();                            /* extern */
extern s16 data_020b01d8;

void func_02044b2c(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020b01d8 = 1;
        return;
    }
    func_02044a40();
}
