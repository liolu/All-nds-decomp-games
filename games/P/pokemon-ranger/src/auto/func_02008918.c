#include "engine.h"
#include "m2c.h"

void func_0200dc84(M2C_UNK);
void func_0200ed4c(M2C_UNK);

void func_02008918(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    func_0200dc84(arg0);
    func_0200ed4c(arg0);
    M2C_FIELD(arg0, s8 *, 0x703) = 1;
}
