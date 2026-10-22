#include "m2c.h"

M2C_UNK func_0201fa80(void *);                      /* extern */

void func_0204dc98(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0xC) {
        M2C_FIELD(arg0, s32 *, 8)     = arg1;
        M2C_FIELD(arg0, void **, 0xC) = arg0;
    }
    func_0201fa80(arg0 + 4);
}
