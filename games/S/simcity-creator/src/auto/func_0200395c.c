#include "engine.h"
#include "m2c.h"

void func_02001b1c(M2C_UNK);
void func_02006c48(M2C_UNK);

extern s32 data_020c7a84;
extern M2C_UNK data_020d0ba0;

void func_0200395c(void) {
    if (data_020c7a84 != -1) {
        func_02006c48(data_020c7a84);
    }
    func_02001b1c(M2C_FIELD(&data_020d0ba0, s32 *, 8));
    M2C_FIELD(&data_020d0ba0, s32 *, 8) = 0;
    M2C_FIELD(&data_020d0ba0, s32 *, 4) = 0;
}
