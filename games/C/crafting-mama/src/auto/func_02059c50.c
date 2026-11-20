#include "engine.h"
#include "m2c.h"

void func_02059b8c(M2C_UNK);
void func_02059cb8(M2C_UNK);
void func_02059cdc(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020b0ab0;
extern M2C_UNK data_020b21b0;

void func_02059c50(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02059cb8(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x170)(arg0);
    func_02059cdc((s32) &data_020b21b0, arg0);
    if (M2C_FIELD(&data_020b0ab0, s32 *, 4) != 0) {
        func_02059cdc(M2C_FIELD(&data_020b0ab0, s32 *, 4) + 0x10E0, arg0);
    }
    func_02059b8c(arg0);
}
