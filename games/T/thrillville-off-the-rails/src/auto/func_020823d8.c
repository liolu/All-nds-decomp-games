#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207fcc4(M2C_UNK);
void func_02082458(M2C_UNK, M2C_UNK);
void func_020824d4(M2C_UNK);
void func_020824e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0208251c(M2C_UNK);
void func_0208252c(M2C_UNK, M2C_UNK);
void func_02082554(void);
void func_02082558(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02082574(void);

void func_020823d8(s32 arg0, s32 arg1) {
    if (func_0207fcc4(arg1) == 0) {
        M2C_FIELD(arg0, void (**)(s32, s32), 0x160)           = func_02082458;
        M2C_FIELD(arg0, void (**)(s32), 0x164)                = func_020824d4;
        M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = func_020824e4;
        M2C_FIELD(arg0, void (**)(s32), 0x16C)                = func_0208251c;
        return;
    }
    M2C_FIELD(arg0, void (**)(s32, s32), 0x160)           = func_0208252c;
    M2C_FIELD(arg0, void (**)(s32), 0x164)                = (void (*)(s32)) func_02082554;
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = func_02082558;
    M2C_FIELD(arg0, void (**)(s32), 0x16C)                = (void (*)(s32)) func_02082574;
}
