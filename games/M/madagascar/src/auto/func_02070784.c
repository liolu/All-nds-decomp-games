/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */
M2C_UNK func_02063d74();                            /* extern */
M2C_UNK func_020707c4();                            /* extern */
extern void *data_020ded54;

void func_02070784(void) {
    s32 temp_r4;

    temp_r4 = func_02063cf8();
    if (M2C_FIELD(data_020ded54, s32 *, 0x1320) != 0) {
        func_02063d74();
    }
    func_020707c4();
    func_02063d0c(temp_r4);
}
