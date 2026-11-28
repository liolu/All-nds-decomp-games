#include "m2c.h"

M2C_UNK func_02025a98(u8);                          /* extern */
M2C_UNK func_020259dc(u8, s32);                     /* extern */
M2C_UNK func_0207f090(void *);                      /* extern */

void func_0207ef8c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020259dc(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02025a98(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0207f090(arg0);
}
