#include "m2c.h"

M2C_UNK func_02007c50(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02008244(M2C_UNK);                     /* extern */
M2C_UNK func_02008400(s32);                         /* extern */
s32 func_0200846c();                                /* extern */
M2C_UNK func_0200dc30(void *);                      /* extern */
M2C_UNK func_0200dc48(void *);                      /* extern */
M2C_UNK func_02025b70(void *);                      /* extern */

void func_02025afc(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02007c50(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_0200dc30(arg0 + 8);
        func_0200dc48(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_0200846c();
        func_02008244(1);
        func_02008400(temp_r5);
    }
    func_02025b70(arg0);
}
