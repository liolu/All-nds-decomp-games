#include "engine.h"
#include "m2c.h"

void func_0207ef8c(M2C_UNK);
void func_0207f164(M2C_UNK, M2C_UNK);
void func_0207dde4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0207ee2c(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (M2C_FIELD(arg0, u8 *, 0x2C) != 0)) {
        if (arg1 == 0) {
            func_0207ef8c(arg0);
            return;
        }
        func_0207dde4(arg0 + 0x1C, 0, arg1);
        func_0207f164(arg0, 0);
        M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
    }
}
