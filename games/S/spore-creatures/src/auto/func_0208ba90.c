#include "m2c.h"

M2C_UNK func_0208bbb4();                            /* extern */

void func_0208ba90(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0208bbb4(arg0);
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, void **, 8) = (void *) (arg0 + 4);
}
