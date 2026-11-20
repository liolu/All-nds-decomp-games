/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206556c();                            /* extern */
M2C_UNK func_02065c98(s32, void *);                 /* extern */
s32 func_02067278();                                /* extern */
M2C_UNK func_0206728c(s32);                         /* extern */
extern void **data_020e6324;

void func_02065738(s32 arg0) {
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = func_02067278();
    temp_r4 = *data_020e6324;
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x78) = arg0;
        func_02065c98(arg0, temp_r4);
    }
    M2C_FIELD(temp_r4, s32 *, 0x64) = 0;
    func_0206556c();
    func_0206728c(temp_r5);
}
