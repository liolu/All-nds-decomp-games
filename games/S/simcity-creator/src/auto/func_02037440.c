#include "m2c.h"

M2C_UNK func_02046284(s32, u8);                     /* extern */
M2C_UNK func_02046300(s32, u8);                     /* extern */
s32 func_02046324(s32);                             /* extern */
M2C_UNK func_0204632c(s32, s32);                    /* extern */
s32 func_02046c84(s32);                             /* extern */
s32 func_020537ec(s32);                             /* extern */
M2C_UNK func_020b1300(u8, s32);                     /* extern */
M2C_UNK func_020b154c(M2C_UNK);                     /* extern */

void func_02037440(void *arg0) {
    s32 temp_r5;

    temp_r5 = func_020537ec(M2C_FIELD(arg0, s32 *, 0x269DC));
    func_020b154c(1);
    if (M2C_FIELD(arg0, u8 *, 0x82) == 7) {
        func_0204632c(M2C_FIELD(arg0, s32 *, 0x269E0), func_02046c84(M2C_FIELD(arg0, s32 *, 0x269E0)));
    }
    func_02046300(temp_r5, M2C_FIELD(arg0, u8 *, 0x82));
    func_020b1300(M2C_FIELD(arg0, u8 *, 0x82), func_02046324(temp_r5));
    func_02046284(temp_r5, (u8) (M2C_FIELD(arg0, u8 *, 0x83) - 1));
    M2C_FIELD(arg0, s32 *, 0xC) = 2;
}
