#include "engine.h"
#include "m2c.h"

void func_02002174(M2C_UNK);
void func_02006c48(M2C_UNK);

extern s32 data_020c7a84;
extern M2C_UNK data_020d0ba0;

void func_02003ad8(void) {
    if (data_020c7a84 != -1) {
        func_02006c48(data_020c7a84);
    }
    func_02002174(M2C_FIELD(&data_020d0ba0, s32 *, 0x18));
    M2C_FIELD(&data_020d0ba0, s32 *, 0x18) = 0;
}
