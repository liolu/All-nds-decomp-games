/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
M2C_UNK func_020af550(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_0210798c;

void func_020b2a78(void *arg0, s32 arg1, s32 arg2) {
    func_0200e8c8(&data_0210798c);
    M2C_FIELD(arg0, s32 *, 0x104) = arg1;
    M2C_FIELD(arg0, s32 *, 0x108) = arg2;
    func_020af550(arg0, 8);
}
