/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020cf83c;

void func_0203f5a0(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 4) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x138)(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1EC) = (s32) data_020cf83c;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0xB4)(arg0);
}
