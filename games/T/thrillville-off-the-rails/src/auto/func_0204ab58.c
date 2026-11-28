#include "m2c.h"

M2C_UNK func_0204b7ec();                            /* extern */

void func_0204ab58(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0204b7ec(arg0);
    M2C_FIELD(arg0, s32 *, 0)     = 0;
    M2C_FIELD(arg0, s32 *, 4)     = 0;
    M2C_FIELD(arg0, void **, 0xC) = (void *) (arg0 + 4);
}
