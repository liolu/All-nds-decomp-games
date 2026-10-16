#include "m2c.h"

s32 func_020b56d4();                                /* extern */
s32 func_020b5e18(M2C_UNK);                         /* extern */
s32 func_020b5efc(M2C_UNK);                         /* extern */
M2C_UNK func_020b5fa4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b5fb8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b6270(s32);                         /* extern */
M2C_UNK func_020b6278(s32);                         /* extern */
extern M2C_UNK data_020f1bcc;

void func_020b5d84(void) {
    func_020b5fa4(2, func_020b5e18(2));
    func_020b5fb8(2, func_020b5efc(2));
    if ((M2C_FIELD(&data_020f1bcc, s32 *, 4) != 0) && ((func_020b56d4() & 3) != 1)) {
        return;
    }
    func_020b6270(0x0200002B);
    func_020b6278(0x023E0021);
}
