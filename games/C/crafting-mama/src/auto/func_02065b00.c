#include "engine.h"
#include "m2c.h"

void func_020315bc(M2C_UNK);
M2C_UNK func_02031700(M2C_UNK);

extern M2C_UNK data_020c9fb0;

void func_02065b00(void) {
    if (func_02031700((s32) &data_020c9fb0) == 0) {
        return;
    }
    func_020315bc((s32) &data_020c9fb0);
}
