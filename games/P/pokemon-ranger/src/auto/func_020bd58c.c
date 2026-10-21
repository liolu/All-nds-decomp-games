/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd558(void *);                      /* extern */
M2C_UNK func_020c8eb4(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_020c9370();                                /* extern */
M2C_UNK func_020c93b0(s32);                         /* extern */
M2C_UNK func_020c9440(M2C_UNK);                     /* extern */
M2C_UNK func_020cdf6c(void *);                      /* extern */
M2C_UNK func_020cdf84(void *);                      /* extern */

void func_020bd58c(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_020c8eb4(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_020cdf84(arg0 + 8);
        func_020cdf6c(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_020c9370();
        func_020c9440(1);
        func_020c93b0(temp_r5);
    }
    func_020bd558(arg0);
}
