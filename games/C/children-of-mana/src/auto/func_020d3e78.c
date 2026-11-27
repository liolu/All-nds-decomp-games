/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d3844(void *);                      /* extern */
M2C_UNK func_020d3ec4();                            /* extern */

void func_020d3e78(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s8 *, 0x44)  = arg2;
    M2C_FIELD(arg0, s8 *, 0x45)  = arg3;
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    M2C_FIELD(arg0, s8 *, 0x46)  = 0;
    func_020d3ec4(arg0);
    func_020d3844(arg0);
}
