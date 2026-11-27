#include "m2c.h"

M2C_UNK func_0209c72c();                            /* extern */
M2C_UNK func_0209c80c(u8 *);                        /* extern */
M2C_UNK func_0209c8d0(u8 *);                        /* extern */

void func_0209c6fc(u8 *arg0) {
    if (((u32) (*arg0 << 0x19) >> 0x1F) != 0) {
        return;
    }
    func_0209c72c(arg0);
    func_0209c80c(arg0);
    func_0209c8d0(arg0);
}
