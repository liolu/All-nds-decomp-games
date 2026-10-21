#include "m2c.h"

M2C_UNK func_0202e7bc(void *);                      /* extern */
M2C_UNK func_0203a144(u8);                          /* extern */
M2C_UNK func_0203a1e4(u8, s32);                     /* extern */

void func_0202e71c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0203a1e4(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0203a144(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0202e7bc(arg0);
}
