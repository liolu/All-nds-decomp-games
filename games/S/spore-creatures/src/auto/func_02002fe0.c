#include "m2c.h"

M2C_UNK func_02002f9c(void *);                      /* extern */
M2C_UNK func_02002fc4();                            /* extern */

void func_02002fe0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 9) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    func_02002fc4(arg0);
    if (M2C_FIELD(arg0, s32 *, 0) != M2C_FIELD(arg0, s32 *, 4)) {
        return;
    }
    func_02002f9c(arg0);
}
