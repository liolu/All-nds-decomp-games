/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02045c88();                            /* extern */
s32 func_02045df8();                         /* extern */
s32 func_020461a0();                         /* extern */

void func_02045e8c(M2C_UNK arg0) {
    if (func_02045df8() != 0) {
        return;
    }
    do {

    } while (func_020461a0(0) != 0);
    if (func_02045df8(arg0) != 0) {
        return;
    }
    func_02045c88();
    if (func_02045df8(arg0) != 0) {
        return;
    }
    do {
        func_020461a0(1);
    } while (func_02045df8(arg0) == 0);
}
