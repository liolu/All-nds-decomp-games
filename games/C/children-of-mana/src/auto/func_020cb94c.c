/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
extern s32 data_02129c64;

void func_020cb94c(void) {
    s32 temp_r4;

    temp_r4 = data_02129c64;
    if (temp_r4 == 0) {
        return;
    }
    func_02013e98(func_020114e4(), temp_r4);
    data_02129c64 = 0;
}
