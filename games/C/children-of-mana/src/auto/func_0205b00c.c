/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205ae4c();                            /* extern */
s32 func_0205c948();                                /* extern */
M2C_UNK func_0205c95c(s32);                         /* extern */
extern void **data_0211b020;

void func_0205b00c(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_0205c948();
    temp_r2 = *data_0211b020;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_0205ae4c();
    func_0205c95c(temp_r4);
}
