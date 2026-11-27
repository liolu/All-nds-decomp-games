#include "m2c.h"

extern M2C_UNK data_027e02e0;

void func_02058e9c(void *arg0) {
    void *temp_r1;
    void *temp_r3;
    void *temp_r3_2;

    temp_r1 = ((s32 *) &data_027e02e0)[((u32) (M2C_FIELD(arg0, u16 *, 0x32) << 0x1E) >> 0x1F)];
    if (temp_r1 == NULL) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x24);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 0x28) = (void *) M2C_FIELD(arg0, void **, 0x28);
    }
    if (((u32) (M2C_FIELD(arg0, u16 *, 0x32) << 0x16) >> 0x1F) != 0) {
        if (M2C_FIELD(temp_r1, void **, 0) == arg0) {
            M2C_FIELD(temp_r1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x24);
        }
    } else {
        if (M2C_FIELD(temp_r1, void **, 4) == arg0) {
            M2C_FIELD(temp_r1, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x24);
        }
        if (M2C_FIELD(temp_r1, void **, 8) == arg0) {
            M2C_FIELD(temp_r1, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x28);
        }
    }
    M2C_FIELD(arg0, void **, 0x24) = NULL;
    M2C_FIELD(arg0, void **, 0x28) = NULL;
}
