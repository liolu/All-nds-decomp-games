/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02051718(M2C_UNK);                     /* extern */
s32 func_02058468(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_020516b4(M2C_UNK arg0) {
    if (func_02058468(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        func_02051718(1);
    } while (func_02058468(0xD, arg0, 0) != 0);
}
