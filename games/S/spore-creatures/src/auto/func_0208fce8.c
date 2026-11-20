#include "m2c.h"

M2C_UNK func_0208fd04();                            /* extern */
M2C_UNK func_020934bc(s32);                         /* extern */

void *func_0208fce8(void *arg0) {
    func_0208fd04();
    func_020934bc(M2C_FIELD(arg0, s32 *, 4));
    return arg0;
}
