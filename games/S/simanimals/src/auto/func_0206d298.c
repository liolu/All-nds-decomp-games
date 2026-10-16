#include "m2c.h"

M2C_UNK func_02065764(u8);                          /* extern */
M2C_UNK func_020657ec(u8, s32);                     /* extern */
M2C_UNK func_0206d198(void *);                      /* extern */

void func_0206d298(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020657ec(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02065764(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0206d198(arg0);
}
