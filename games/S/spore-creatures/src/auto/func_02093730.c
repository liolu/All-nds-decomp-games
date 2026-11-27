#include "m2c.h"

M2C_UNK func_020937a8(void *);                      /* extern */
M2C_UNK func_0209386c();                            /* extern */

void func_02093730(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x32) = arg1;
    func_0209386c();
    func_020937a8(arg0);
}
