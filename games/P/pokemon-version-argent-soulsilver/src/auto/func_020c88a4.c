#include "m2c.h"

M2C_UNK func_020c8944(void *);                      /* extern */
M2C_UNK func_020d5044(u8);                          /* extern */
M2C_UNK func_020d50e4(u8, s32);                     /* extern */

void func_020c88a4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020d50e4(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_020d5044(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020c8944(arg0);
}
