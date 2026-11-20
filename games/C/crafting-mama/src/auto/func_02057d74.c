#include "m2c.h"

M2C_UNK func_0201eaa4(u8);                          /* extern */
M2C_UNK func_0201eb0c(u8, s32);                     /* extern */
M2C_UNK func_02057e18(void *);                      /* extern */

void func_02057d74(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0201eb0c(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0201eaa4(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02057e18(arg0);
}
