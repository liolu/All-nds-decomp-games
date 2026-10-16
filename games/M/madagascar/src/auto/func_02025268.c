/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0201dd18(void *, s32);                     /* extern */
M2C_UNK func_0201e0c4(void *, void *);              /* extern */

void func_02025268(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0201e0c4(arg0 + 0x1C, arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = func_0201dd18(arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 4));
}
