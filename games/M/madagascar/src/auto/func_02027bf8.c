/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207b040();                      /* extern */

void func_02027bf8(void **arg0) {
    if (M2C_FIELD(*arg0, s32 *, 0x14) != 0) {
        func_0207b040();
    }
    func_0207b040(*arg0);
    *arg0 = NULL;
}
