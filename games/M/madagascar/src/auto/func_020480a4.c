/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203ba04(s32);                         /* extern */
M2C_UNK func_02048010(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0204802c(void *, s32, M2C_UNK);        /* extern */

void func_020480a4(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0203ba04((arg1 * 0x18) + M2C_FIELD(arg0, s32 *, 4));
    func_0204802c(arg0, arg1, arg2);
    func_02048010(arg0, arg1, arg3);
}
