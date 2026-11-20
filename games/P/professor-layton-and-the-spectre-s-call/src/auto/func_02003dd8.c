#include "m2c.h"

M2C_UNK func_02018488(u8);                          /* extern */
M2C_UNK func_020184f0(u8, s32);                     /* extern */
M2C_UNK func_02003e7c(void *);                      /* extern */

void func_02003dd8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020184f0(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02018488(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02003e7c(arg0);
}
