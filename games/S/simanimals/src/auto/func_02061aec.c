#include "engine.h"
#include "m2c.h"

void func_02064cc0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02065040(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0208de88;

void func_02061aec(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0208de88 != -1) && ((u32) arg2 > 0x30U)) {
        func_02064cc0(data_0208de88, arg0, arg1 + 0x07000400, arg2);
        return;
    }
    func_02065040(arg0, arg1 + 0x07000400, arg2);
}
