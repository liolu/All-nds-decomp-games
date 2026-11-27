/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ab04(s32);                         /* extern */
M2C_UNK func_0207abf4(s32);                         /* extern */
M2C_UNK func_020a0124(void *);                      /* extern */

void func_020a08f8(void *arg0) {
    func_0207abf4(M2C_FIELD(arg0, s32 *, 0xB8));
    func_0207ab04(M2C_FIELD(arg0, s32 *, 0xB8));
    func_020a0124(arg0);
}
