/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020615e4();                            /* extern */
M2C_UNK func_02061648(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020616c8();                            /* extern */

void func_02005350(void *arg0) {
    func_020616c8();
    func_02061648(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x10) << 0xD, 0x200);
    func_020615e4();
}
