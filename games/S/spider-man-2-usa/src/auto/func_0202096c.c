/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02020148();                            /* extern */
M2C_UNK func_02020690();                            /* extern */
M2C_UNK func_02020784();                            /* extern */
s32 func_020209b0();                                /* extern */
M2C_UNK func_02038c24();                            /* extern */

void func_0202096c(void) {
    if (func_020209b0() == 0) {
        return;
    }
    do {
        func_02020784();
        func_02020690();
        func_02038c24();
        func_02020148();
    } while (func_020209b0() != 0);
}
