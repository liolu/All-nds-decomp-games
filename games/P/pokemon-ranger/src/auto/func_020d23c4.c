/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_020ca0e8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_020d23c4(M2C_UNK arg0) {
    if (func_020ca0e8(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_020ca0e8(0xD, arg0, 0) != 0);
}
