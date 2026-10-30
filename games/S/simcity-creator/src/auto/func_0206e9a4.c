#include "m2c.h"

s32 func_0205369c(s32);                             /* extern */
M2C_UNK func_020ae4d4();                            /* extern */
M2C_UNK func_020ae518(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ae588(s32, s32);                    /* extern */
M2C_UNK func_ov012_02163ac8(void **, s32);          /* extern */

void func_0206e9a4(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    func_ov012_02163ac8(M2C_FIELD(arg0, void ***, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r4 = func_0205369c(M2C_FIELD(arg0, s32 *, 0x18));
    func_020ae4d4();
    func_020ae518(temp_r4, 2);
    func_020ae588(temp_r4, 0x9001);
}
