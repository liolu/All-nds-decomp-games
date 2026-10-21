#include "engine.h"
#include "m2c.h"

void func_02023590(M2C_UNK);
void func_02026444(M2C_UNK);

void func_02024278(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE1F8) != 1) {
        return;
    }
    func_02026444(arg0);
    func_02023590(arg0);
}
