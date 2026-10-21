#include "m2c.h"

M2C_UNK func_02027248();                            /* extern */
M2C_UNK func_02028ba0(M2C_UNK);                     /* extern */
void *func_02060354();                              /* extern */

void func_020299ac(s16 arg0) {
    M2C_FIELD(func_02060354(), s16 *, 0x20) = arg0;
    func_02028ba0(0);
    func_02027248();
}
