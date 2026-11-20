/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001288();                            /* extern */
extern u8 data_020ffe80;

void func_0200133c(void *arg0) {
    if (data_020ffe80 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_02001288();
}
