#include "m2c.h"

M2C_UNK func_02012554(void *);                      /* extern */

void func_0205bbb4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return;
    }
    func_02012554(arg0 + 8);
    M2C_FIELD(arg0, u8 *, 4) = 0U;
}
