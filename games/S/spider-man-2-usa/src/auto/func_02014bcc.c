#include "engine.h"
#include "m2c.h"

void func_02014b30(M2C_UNK);

void func_02014bcc(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x18) = arg2;
    func_02014b30(arg0);
}
