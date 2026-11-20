/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204d708();                                /* extern */
s32 func_0204d718(s32, void *);                     /* extern */
s32 func_0204d7a0();                                /* extern */
s32 func_0204d81c(s32, s32);                        /* extern */

void func_0204ae94(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, s32 *, 0x10) = func_0204d718(func_0204d708(), arg0);
    temp_r4                      = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(temp_r4, s32 *, 4) = func_0204d81c(func_0204d7a0(), M2C_FIELD(temp_r4, s32 *, 8));
}
