#include "m2c.h"

M2C_UNK func_020810fc(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020821a8();                                /* extern */
M2C_UNK func_02087494(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02082630(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020821a8();
    switch (temp_r0) {                              /* irregular */
        case 3:
            func_02087494(M2C_FIELD(arg0, s32 *, 0x14), arg1, arg2);
            return;
        case 2:
            func_020810fc(M2C_FIELD(arg0, s32 *, 0x18), arg1, arg2);
            return;
    }
}
