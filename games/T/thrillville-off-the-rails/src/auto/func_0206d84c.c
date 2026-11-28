#include "m2c.h"

M2C_UNK func_0206c73c();                            /* extern */
M2C_UNK func_0206cd38();                            /* extern */

void func_0206d84c(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), u8 *, 0x2E) != 0) {
        func_0206cd38(arg0);
        return;
    }
    func_0206c73c(arg0);
}
