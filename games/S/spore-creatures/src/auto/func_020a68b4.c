#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_020a6bf0(void *);                      /* extern */
extern M2C_UNK data_020eae68;

void func_020a68b4(s32 arg0) {
    void **var_r0;
    void **var_r3;
    void *temp_r2;
    void *temp_r5;

    if (arg0 != 0) {
        if (M2C_FIELD(&data_020eae68, volatile s32 *, 0x1EC) != 0) {
            var_r3 = M2C_FIELD(&data_020eae68, void ***, 0x1F0);
        } else {
            var_r3 = M2C_FIELD(&data_020eae68, void ***, 0x1F4);
        }
        if (var_r3 == M2C_FIELD(&data_020eae68, void ***, 0x1F4)) {
            return;
        }
        do {
            temp_r2                                   = M2C_FIELD(var_r3, void **, 0);
            M2C_FIELD(temp_r2, volatile s32 *, 0x660) = (s32) (M2C_FIELD(temp_r2, volatile s32 *, 0x660) | 0x80000000);
            var_r3                                    = M2C_FIELD(var_r3, void ***, 4);
        } while (var_r3 != M2C_FIELD(&data_020eae68, void ***, 0x1F4));
        return;
    }
    if (M2C_FIELD(&data_020eae68, volatile s32 *, 0x1EC) == 0) {
        return;
    }
    do {
        if (M2C_FIELD(&data_020eae68, volatile s32 *, 0x1EC) != 0) {
            var_r0 = M2C_FIELD(&data_020eae68, void ***, 0x1F0);
        } else {
            var_r0 = M2C_FIELD(&data_020eae68, void ***, 0x1F4);
        }
        temp_r5 = *var_r0;
        if (temp_r5 != NULL) {
            func_020a6bf0(temp_r5);
            func_020934a8(temp_r5);
        }
    } while (M2C_FIELD(&data_020eae68, volatile s32 *, 0x1EC) != 0);
}
