#include "m2c.h"

M2C_UNK func_020b7af0(u8);                          /* extern */
M2C_UNK func_020b7b90(u8, s32);                     /* extern */
M2C_UNK func_02085610(void *);                      /* extern */

void func_02085570(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020b7b90(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_020b7af0(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02085610(arg0);
}
