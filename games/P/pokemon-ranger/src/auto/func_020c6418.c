/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6258();                            /* extern */
s32 func_020c8070();                                /* extern */
M2C_UNK func_020c8084(s32);                         /* extern */
extern void **data_020f6994;

void func_020c6418(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_020c8070();
    temp_r2 = *data_020f6994;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_020c6258();
    func_020c8084(temp_r4);
}
