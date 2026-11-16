#include "m2c.h"

M2C_UNK func_0208bfdc(void *);                      /* extern */
M2C_UNK func_02086128(u8);                          /* extern */
M2C_UNK func_020861b0(u8, s32);                     /* extern */

void func_0208bf3c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020861b0(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02086128(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0208bfdc(arg0);
}
