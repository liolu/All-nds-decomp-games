/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02001d9c(void *);                      /* extern */
s32 func_0207b00c(s32);                             /* extern */

void *func_02001dec(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = func_0207b00c(arg1 * 4);
    func_02001d9c(arg0);
    return arg0;
}
