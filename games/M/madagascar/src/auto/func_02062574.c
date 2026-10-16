/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020623d8();                            /* extern */
s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */
extern void **data_020db7ac;

void func_02062574(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_02063cf8();
    temp_r2 = *data_020db7ac;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_020623d8();
    func_02063d0c(temp_r4);
}
