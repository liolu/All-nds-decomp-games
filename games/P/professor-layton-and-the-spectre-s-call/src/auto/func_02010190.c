#include "engine.h"
#include "m2c.h"

void func_020126b4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02015d24(M2C_UNK, M2C_UNK);
void func_02015d48(void);

void func_02010190(s32 arg0, s32 arg1, s32 arg2) {
    func_02015d24(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02015d48();
    func_020126b4(arg2, arg0, arg1);
}
