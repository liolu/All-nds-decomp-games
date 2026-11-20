/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024958(void *);                          /* extern */
M2C_UNK func_02042f78(void *);                      /* extern */
M2C_UNK func_020433b4(void *);                      /* extern */

void func_0204318c(void *arg0) {
    if (func_02024958(M2C_FIELD(arg0, void **, 0x1C4)) != 0) {
        func_02042f78(arg0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 4) == 0) {
        return;
    }
    func_020433b4(arg0);
}
