/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02042fd0();                            /* extern */
s32 func_020449c4();                                /* extern */
M2C_UNK func_020449d8(s32);                         /* extern */
extern void **data_020afebc;

void func_0204316c(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_020449c4();
    temp_r2 = *data_020afebc;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_02042fd0();
    func_020449d8(temp_r4);
}
