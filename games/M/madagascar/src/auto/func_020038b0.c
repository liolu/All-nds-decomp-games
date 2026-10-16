/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0202e018();                            /* extern */
M2C_UNK func_0200364c();                            /* extern */
M2C_UNK func_02003710();                            /* extern */
s32 func_020038f4();                                /* extern */
M2C_UNK func_0202e45c();                            /* extern */

void func_020038b0(void) {
    if (func_020038f4() == 0) {
        return;
    }
    do {
        func_02003710();
        func_0200364c();
        func_0202e45c();
        func_0202e018();
    } while (func_020038f4() != 0);
}
