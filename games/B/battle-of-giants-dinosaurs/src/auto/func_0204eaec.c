/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

M2C_UNK func_0204eb3c(void *);                      /* extern */
M2C_UNK func_02041138(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_020416c8();                                /* extern */
M2C_UNK func_02041684(s32);                         /* extern */
M2C_UNK func_02041570(M2C_UNK);                     /* extern */
M2C_UNK func_02044c68(void *);                      /* extern */
M2C_UNK func_02044c58(void *);                      /* extern */

void func_0204eaec(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02041138(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02044c58(arg0 + 8);
        func_02044c68(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_020416c8();
        func_02041570(1);
        func_02041684(temp_r5);
    }
    func_0204eb3c(arg0);
}
