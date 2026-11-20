#include "m2c.h"

M2C_UNK func_02081240(void *);                      /* extern */
M2C_UNK func_0208c7d4(s32);                         /* extern */

void func_02081064(void *arg0, s32 arg1) {
    if (arg1 == 5) {
        func_0208c7d4(M2C_FIELD(arg0, s32 *, 4));
    }
    if (arg1 != 6) {
        return;
    }
    func_02081240(arg0);
}
