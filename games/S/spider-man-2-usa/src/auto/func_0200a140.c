/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f64(s32);                         /* extern */

void func_0200a140(void *arg0) {
    func_02059f64(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
