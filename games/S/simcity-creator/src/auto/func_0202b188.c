#include "m2c.h"

M2C_UNK func_02029e00();                            /* extern */
M2C_UNK func_0202afa0(void *);                      /* extern */

void func_0202b188(void *arg0) {
    func_02029e00();
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    func_0202afa0(arg0);
}
