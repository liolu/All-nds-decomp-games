#include "m2c.h"

M2C_UNK func_0205cd84();                            /* extern */
s32 func_0205d528(s32);                             /* extern */
M2C_UNK func_0205d578(s32);                         /* extern */

void func_0205dfd8(s32 arg0, s32 arg1) {
    if (arg1 < 1) {
        return;
    }
    func_0205cd84();
    func_0205d578(arg1);
    do {

    } while (func_0205d528(arg1) == 0x80000000);
}
