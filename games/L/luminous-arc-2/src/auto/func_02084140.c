#include "m2c.h"

M2C_UNK func_0200536c(M2C_UNK);                     /* extern */
s32 func_0207b6a8();                                /* extern */
s32 func_0207e95c();                                /* extern */
M2C_UNK func_0207ec94();                            /* extern */
M2C_UNK func_0207ecb0();                            /* extern */
extern M2C_UNK data_02170334;

void func_02084140(void) {
    if (M2C_FIELD(&data_02170334, void **, 4) == NULL) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(&data_02170334, void **, 4), u16 *, 4) == 1) {
        if (M2C_FIELD(M2C_FIELD(&data_02170334, void **, 4), s32 *, 0x10) == 1) {
            func_0207ec94();
            do {

            } while ((u32) (func_0207e95c() - 2) > 2U);
            func_0207ecb0();
        }
        M2C_FIELD(&data_02170334, void **, 4) = NULL;
        return;
    }
    if (func_0207b6a8() == 0) {
        do {
            func_0200536c(0xA);
        } while (func_0207b6a8() == 0);
    }
    M2C_FIELD(&data_02170334, void **, 4) = NULL;
}
