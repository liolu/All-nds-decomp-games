#include "m2c.h"

M2C_UNK func_02002720(void *);                      /* extern */

void func_02025ddc(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0xF) {
        M2C_FIELD(arg0, s32 *, 8)     = arg1;
        M2C_FIELD(arg0, void **, 0xC) = arg0;
    }
    func_02002720(arg0 + 4);
}
