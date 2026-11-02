/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_0206da4c(void *);                      /* extern */
M2C_UNK func_02065888(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_02065f9c();                                /* extern */
M2C_UNK func_02065f30(s32);                         /* extern */
M2C_UNK func_02065d74(M2C_UNK);                     /* extern */
M2C_UNK func_02069e60(void *);                      /* extern */
M2C_UNK func_02069e48(void *);                      /* extern */

void func_0206da7c(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02065888(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02069e48(arg0 + 8);
        func_02069e60(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_02065f9c();
        func_02065d74(1);
        func_02065f30(temp_r5);
    }
    func_0206da4c(arg0);
}
