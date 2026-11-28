/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022588();                            /* extern */
M2C_UNK func_020227dc(s32, void *);                 /* extern */
s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
extern void **data_020ec378;

void func_02022140(s32 arg0) {
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = func_02024624();
    temp_r4 = *data_020ec378;
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x78) = arg0;
        func_020227dc(arg0, temp_r4);
    }
    M2C_FIELD(temp_r4, s32 *, 0x64) = 0;
    func_02022588();
    func_02024638(temp_r5);
}
