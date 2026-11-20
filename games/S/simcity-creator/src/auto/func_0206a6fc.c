#include "m2c.h"

s32 func_02069c18();                                /* extern */
M2C_UNK func_0206aa4c(void *);                      /* extern */
M2C_UNK func_0206c0f8(s32);                         /* extern */

void func_0206a6fc(void *arg0) {
    if (func_02069c18() != 0) {
        func_0206aa4c(arg0);
    }
    func_0206c0f8(M2C_FIELD(arg0, s32 *, 0x34));
}
