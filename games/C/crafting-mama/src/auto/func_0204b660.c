#include "engine.h"
#include "m2c.h"

void func_020293f8(M2C_UNK);
void func_0204af40(M2C_UNK);

void func_0204b660(s32 arg0) {
    void *temp_r0;

    if (arg0 != 0) {
        temp_r0 = *(M2C_UNK *) arg0;
        if (temp_r0 != NULL) {
            if (M2C_FIELD(temp_r0, s32 *, 0x1C) != 0x1AB14AB4) {
                return;
            }
            func_0204af40((s32) temp_r0);
            func_020293f8(arg0);
        }
    }
}
