#include "m2c.h"

M2C_UNK func_0206cf80(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0207062c(void *);                      /* extern */
s32 func_020707bc(M2C_UNK);                         /* extern */
M2C_UNK func_02070914(M2C_UNK, M2C_UNK);            /* extern */
void *func_02070fc8();                              /* extern */
M2C_UNK func_02071ca8(void *);                      /* extern */
extern M2C_UNK data_0216fdb8;

s32 func_020706cc(M2C_UNK arg0) {
    void *temp_r0;

    if (M2C_FIELD(&data_0216fdb8, u8 *, 4) == 0) {
        return -0x5A;
    }
    temp_r0 = func_02070fc8(arg0);
    if (temp_r0 == NULL) {
        func_0206cf80(-0x40, arg0, 0);
        return -0x40;
    }
    if (M2C_FIELD(temp_r0, u8 *, 5) == 0) {
        if (M2C_FIELD(temp_r0, u8 *, 9) != 0) {
            func_02070914(arg0, 0);
        }
        do {

        } while (func_020707bc(arg0) > 0);
        M2C_FIELD(temp_r0, u8 *, 5)    = 1U;
        M2C_FIELD(temp_r0, s8 *, 0xE)  = 1;
        M2C_FIELD(temp_r0, s8 *, 0x11) = 0;
        if (M2C_FIELD(temp_r0, u8 *, 0x19) == 1) {
            func_02071ca8(temp_r0);
        }
        func_0207062c(temp_r0);
    }
    return 0;
}
