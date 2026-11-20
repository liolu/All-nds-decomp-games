/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02056ba8();                            /* extern */
s32 func_02057aa0();                                /* extern */
M2C_UNK func_02057ab4(s32);                         /* extern */
extern void **data_021612dc;

void func_02056d44(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_02057aa0();
    temp_r2 = *data_021612dc;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_02056ba8();
    func_02057ab4(temp_r4);
}
