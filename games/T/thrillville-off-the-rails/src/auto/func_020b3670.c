#include "m2c.h"

M2C_UNK func_0203bafc(void *);                      /* extern */
M2C_UNK func_0203c048(void *);                      /* extern */
void *func_020742ec(M2C_UNK);                       /* extern */
extern void *data_020efc38;

void *func_020b3670(void) {
    void *temp_r0;

    if (data_020efc38 == NULL) {
        temp_r0 = func_020742ec(0x20);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s32 *, 0) = 0;
            M2C_FIELD(temp_r0, s32 *, 4) = 0;
            func_0203bafc(temp_r0 + 8);
            func_0203c048(temp_r0 + 0x14);
        }
        data_020efc38 = temp_r0;
    }
    return data_020efc38;
}
