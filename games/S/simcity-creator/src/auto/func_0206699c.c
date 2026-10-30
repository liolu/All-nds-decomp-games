#include "m2c.h"

M2C_UNK func_02003b18();                            /* extern */
M2C_UNK func_02003b74(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02003cb4();                            /* extern */
M2C_UNK func_02003d00();                            /* extern */
M2C_UNK func_02003d34(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02003da0();                            /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */

s32 func_0206699c(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x464) != 0) && (M2C_FIELD(arg0, s32 *, 0x460) != 0)) {
        func_02003b18();
        func_020055c4(M2C_FIELD(M2C_FIELD(arg0, void **, 0x468), s32 *, 0x14), 0x8000);
        func_02003b74(M2C_FIELD(M2C_FIELD(arg0, void **, 0x468), s32 *, 0x14), 0x20000, 0x8000);
        func_02003cb4();
        func_02003d00();
        func_020055c4(M2C_FIELD(M2C_FIELD(arg0, void **, 0x46C), s32 *, 0xC), 0x200);
        func_02003d34(M2C_FIELD(M2C_FIELD(arg0, void **, 0x46C), s32 *, 0xC), 0x1400, 0x200);
        func_02003da0();
        return 1;
    }
    return 0;
}
