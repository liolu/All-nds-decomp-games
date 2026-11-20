/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f514(void *);                      /* extern */
M2C_UNK func_0200f56c(void *);                      /* extern */
M2C_UNK func_0200fba8(void *);                      /* extern */
M2C_UNK func_0200fc0c(void *);                      /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */

void func_0200fca4(void *arg0) {
    func_02024698(0);
    func_0200fc0c(arg0);
    func_0200f56c(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x80) == 0) {
        return;
    }
    func_0200fba8(arg0);
    func_0200f514(arg0);
}
