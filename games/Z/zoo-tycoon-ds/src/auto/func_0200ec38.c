/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020375d8();                         /* extern */
extern u8 data_0217e2fc;
extern u16 data_0217e30c;

void func_0200ec38(void *arg0) {
    func_020375d8(arg0 + 0x2842C);
    M2C_FIELD(arg0, s8 *, 0x2B120) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B121) = 0;
    M2C_FIELD(arg0, s8 *, 0x19A)   = (s8) data_0217e30c;
    M2C_FIELD(arg0, u8 *, 0x19B)   = (u8) data_0217e2fc;
}
