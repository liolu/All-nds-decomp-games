#include "engine.h"
#include "m2c.h"

void func_020b00e8(M2C_UNK);
void func_020affc0(void);
void func_020acb54(M2C_UNK, M2C_UNK);

void func_020b0128(s32 arg0, s32 arg1) {
    func_020affc0();
    func_020acb54(arg0, arg1);
    func_020b00e8(arg0);
}
