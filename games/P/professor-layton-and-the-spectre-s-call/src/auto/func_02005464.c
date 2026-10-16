#include "engine.h"
#include "m2c.h"

void func_020053a0(M2C_UNK);
void func_020054cc(M2C_UNK);
void func_020054f0(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02032498;
extern M2C_UNK data_02033b98;

void func_02005464(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020054cc(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x170)(arg0);
    func_020054f0((s32) &data_02033b98, arg0);
    if (M2C_FIELD(&data_02032498, s32 *, 4) != 0) {
        func_020054f0(M2C_FIELD(&data_02032498, s32 *, 4) + 0x10E0, arg0);
    }
    func_020053a0(arg0);
}
