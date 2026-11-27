/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201e150(void *);                          /* extern */
M2C_UNK func_020960e4(s32, s32);                    /* extern */
s32 func_020961e8();                                /* extern */

void func_0201b6d8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C0) == 0) {
        return;
    }
    if (func_020961e8() != 0) {
        return;
    }
    func_020960e4(M2C_FIELD(arg0, s32 *, 0x1C0), func_0201e150(arg0));
}
