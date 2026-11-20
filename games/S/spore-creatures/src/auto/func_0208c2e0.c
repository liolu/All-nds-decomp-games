#include "m2c.h"

M2C_UNK func_0208c318(void *, void *);              /* extern */

void *func_0208c2e0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, void **, 8) = (void *) (arg0 + 4);
    func_0208c318(arg0, arg0);
    return arg0;
}
