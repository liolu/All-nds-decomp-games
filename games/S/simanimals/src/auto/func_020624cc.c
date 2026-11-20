#include "engine.h"
#include "m2c.h"

void func_0206145c(M2C_UNK);
void func_02064e34(M2C_UNK);

extern s32 data_0208de88;
extern M2C_UNK data_0208e548;

void func_020624cc(void) {
    if (data_0208de88 != -1) {
        func_02064e34(data_0208de88);
    }
    func_0206145c(M2C_FIELD(&data_0208e548, s32 *, 0x18));
    M2C_FIELD(&data_0208e548, s32 *, 0x18) = 0;
}
