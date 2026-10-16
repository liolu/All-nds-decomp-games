#include "m2c.h"

M2C_UNK func_02007220(u8);                          /* extern */
M2C_UNK func_020072a8(u8, s32);                     /* extern */
M2C_UNK func_02030b70(void *);                      /* extern */

void func_02030ad0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020072a8(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02007220(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02030b70(arg0);
}
