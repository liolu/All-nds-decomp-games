/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020653bc(void *);                      /* extern */
M2C_UNK func_0206656c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206664c(void *, M2C_UNK);             /* extern */

void func_02066668(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    func_0206656c(arg0 + 0x38, 1);
    func_020653bc(arg0);
    func_0206664c(arg0, arg1);
}
