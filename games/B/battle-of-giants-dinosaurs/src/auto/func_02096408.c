#include "m2c.h"

s32 func_0208407c(void *, s32);                     /* extern */
M2C_UNK func_02084094();                            /* extern */

s32 func_02096408(void *arg0, s32 arg1) {
    func_02084094();
    return M2C_FIELD(arg0, s32 *, 0xC) + (func_0208407c(arg0, M2C_FIELD(arg0, s32 *, 4) + arg1) * 4);
}
