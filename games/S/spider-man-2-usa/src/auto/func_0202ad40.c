/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000f54();                            /* extern */
M2C_UNK func_02020f24(s32);                         /* extern */

void func_0202ad40(void *arg0) {
    func_02000f54();
    func_02020f24(M2C_FIELD(arg0, s32 *, 0x378));
}
