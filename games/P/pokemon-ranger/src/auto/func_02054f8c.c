#include "engine.h"
#include "m2c.h"

M2C_UNK func_02054d94(M2C_UNK);
void func_02054fd0(M2C_UNK);
void func_02055080(M2C_UNK, M2C_UNK);
void func_020552dc(M2C_UNK);

void func_02054f8c(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
        func_02054fd0(arg0);
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x38) == 0) {
        func_020552dc(arg0);
        return;
    }
    func_02055080(arg0, func_02054d94(arg0));
}
