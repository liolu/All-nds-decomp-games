/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_020c8e68(void *);                      /* extern */
M2C_UNK func_020d519c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_020d59fc();                                /* extern */
M2C_UNK func_020d5990(s32);                         /* extern */
M2C_UNK func_020d57d4(M2C_UNK);                     /* extern */
M2C_UNK func_020db9a8(void *);                      /* extern */
M2C_UNK func_020db990(void *);                      /* extern */

void func_020c8df4(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_020d519c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_020db990(arg0 + 8);
        func_020db9a8(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_020d59fc();
        func_020d57d4(1);
        func_020d5990(temp_r5);
    }
    func_020c8e68(arg0);
}
