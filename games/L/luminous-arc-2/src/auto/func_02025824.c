#include "m2c.h"

M2C_UNK func_02007b4c(u8);                          /* extern */
M2C_UNK func_02007bb4(u8, s32);                     /* extern */
M2C_UNK func_020258c4(void *);                      /* extern */

void func_02025824(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02007bb4(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02007b4c(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020258c4(arg0);
}
