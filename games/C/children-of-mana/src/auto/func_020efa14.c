/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ef9bc();                            /* extern */

void func_020efa14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0x68);
    func_020ef9bc();
}
