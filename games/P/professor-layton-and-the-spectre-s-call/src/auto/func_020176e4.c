#include "engine.h"
#include "m2c.h"

void func_02017714(void);

extern M2C_UNK data_02034d54;

void func_020176e4(void) {
    M2C_UNK (*temp_r2)(s32);

    temp_r2 = M2C_FIELD(&data_02034d54, M2C_UNK(**)(s32), 0);
    if (temp_r2 != NULL) {
        M2C_FIELD(&data_02034d54, M2C_UNK(**)(s32), 0) = NULL;
        temp_r2(M2C_FIELD(&data_02034d54, s32 *, 4));
    }
    func_02017714();
}
