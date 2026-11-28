#include "m2c.h"

M2C_UNK func_0203ba5c(void *);                      /* extern */
M2C_UNK func_0203c048(void *);                      /* extern */
M2C_UNK func_0205866c(s32, M2C_UNK, M2C_UNK *);     /* extern */
s32 func_020589d8(void *, void *);                  /* extern */
void *func_020742ec(M2C_UNK);                       /* extern */
extern void *data_020efc2c;
extern M2C_UNK data_020fbafc;

void **func_020585c0(void **arg0, void **arg1) {
    M2C_UNK *var_r5;
    s32 temp_r0_2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    temp_r1 = *arg1;
    *arg0   = temp_r1;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) + 1);
    }
    if (*arg0 != NULL) {
        if (data_020efc2c == NULL) {
            temp_r0 = func_020742ec(0x20);
            if (temp_r0 != NULL) {
                M2C_FIELD(temp_r0, s32 *, 0) = 0;
                M2C_FIELD(temp_r0, s32 *, 4) = 0;
                func_0203ba5c(temp_r0 + 8);
                func_0203c048(temp_r0 + 0x14);
            }
            data_020efc2c = temp_r0;
        }
        temp_r1_2 = *arg0;
        var_r5    = M2C_FIELD(temp_r1_2, M2C_UNK **, 0x10);
        temp_r0_2 = func_020589d8(data_020efc2c, temp_r1_2 + 8);
        if (var_r5 == NULL) {
            var_r5 = &data_020fbafc;
        }
        func_0205866c(temp_r0_2, 1, var_r5);
    }
    return arg0;
}
