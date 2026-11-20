#include "engine.h"
#include "m2c.h"

void func_020171d4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02005ae4(M2C_UNK, M2C_UNK);
void func_02005b08(void);

void func_02014d90(s32 arg0, s32 arg1, s32 arg2) {
    func_02005ae4(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02005b08();
    func_020171d4(arg2, arg0, arg1);
}
