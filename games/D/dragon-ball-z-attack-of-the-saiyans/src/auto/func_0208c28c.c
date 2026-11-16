/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_0208c300(void *);                      /* extern */
M2C_UNK func_02086230(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0208695c();                                /* extern */
M2C_UNK func_020868f0(s32);                         /* extern */
M2C_UNK func_02086734(M2C_UNK);                     /* extern */
M2C_UNK func_020889b4(void *);                      /* extern */
M2C_UNK func_0208899c(void *);                      /* extern */

void func_0208c28c(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02086230(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_0208899c(arg0 + 8);
        func_020889b4(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_0208695c();
        func_02086734(1);
        func_020868f0(temp_r5);
    }
    func_0208c300(arg0);
}
