/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020672d0();                                /* extern */
M2C_UNK func_020695e0();                            /* extern */
extern s32 data_020e8364;

void func_0206dfec(void) {
    if (data_020e8364 == 0) {
        return;
    }
    do {
        if (func_020672d0() == 0x12) {
            func_020695e0();
        }
    } while (data_020e8364 != 0);
}
