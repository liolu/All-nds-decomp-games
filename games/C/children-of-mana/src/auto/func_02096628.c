/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02096268();                                /* extern */
M2C_UNK func_02096270(s32);                         /* extern */

void func_02096628(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    if (func_02096268() != 0) {
        return;
    }
    func_02096270(arg0);
}
