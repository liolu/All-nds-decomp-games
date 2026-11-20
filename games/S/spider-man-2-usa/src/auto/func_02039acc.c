/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70();                      /* extern */

void func_02039acc(void **arg0) {
    if (M2C_FIELD(*arg0, s32 *, 0x14) != 0) {
        func_02059f70();
    }
    func_02059f70(*arg0);
    *arg0 = NULL;
}
