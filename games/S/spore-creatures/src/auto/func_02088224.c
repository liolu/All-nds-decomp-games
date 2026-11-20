#include "engine.h"
#include "m2c.h"

M2C_UNK func_02085f7c(M2C_UNK);
void func_020882a4(M2C_UNK, M2C_UNK);
void func_02088318(M2C_UNK);
void func_02088328(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02088360(M2C_UNK);
void func_02088370(M2C_UNK, M2C_UNK);
void func_02088398(void);
void func_0208839c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020883b8(void);

void func_02088224(s32 arg0, s32 arg1) {
    if (func_02085f7c(arg1) == 0) {
        M2C_FIELD(arg0, void (**)(s32, s32), 0x160)           = func_020882a4;
        M2C_FIELD(arg0, void (**)(s32), 0x164)                = func_02088318;
        M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = func_02088328;
        M2C_FIELD(arg0, void (**)(s32), 0x16C)                = func_02088360;
        return;
    }
    M2C_FIELD(arg0, void (**)(s32, s32), 0x160)           = func_02088370;
    M2C_FIELD(arg0, void (**)(s32), 0x164)                = (void (*)(s32)) func_02088398;
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = func_0208839c;
    M2C_FIELD(arg0, void (**)(s32), 0x16C)                = (void (*)(s32)) func_020883b8;
}
