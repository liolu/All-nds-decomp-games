/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008f8c();           /* extern */
M2C_UNK func_02009134();       /* extern */
M2C_UNK func_020094c4();                    /* extern */
extern s32 data_0217ff60;
extern s32 data_0217ff64;

void func_0205ddf8(void *arg0) {
    func_020094c4(0x1A3, arg0 + 0x1C70C);
    M2C_FIELD(arg0, s32 *, 0x1C704) = (s32) data_0217ff64;
    M2C_FIELD(arg0, s32 *, 0x1C708) = (s32) data_0217ff60;
    func_02008f8c(0x1A3, data_0217ff64, 0);
    func_02009134(0xBD, data_0217ff60, 0);
}
