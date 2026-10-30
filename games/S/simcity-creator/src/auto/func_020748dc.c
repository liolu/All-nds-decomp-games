#include "m2c.h"

M2C_UNK func_0205fc10();                            /* extern */
M2C_UNK func_02072888(s32);                         /* extern */
M2C_UNK func_02074924(void *, M2C_UNK);             /* extern */

void func_020748dc(void *arg0) {
    func_02072888(M2C_FIELD(arg0, s32 *, 0x38));
    func_0205fc10();
    func_02074924(arg0, 3);
    func_02074924(arg0, 4);
    func_02074924(arg0, 5);
    func_02074924(arg0, 6);
}
