#include "engine.h"
#include "m2c.h"

void func_02005008(M2C_UNK);
void func_0200509c(M2C_UNK);
void func_020959dc(M2C_UNK);
M2C_UNK func_02095d50(void);

extern M2C_UNK data_02170d04;
extern M2C_UNK data_02170eac;
extern M2C_UNK data_02170f6c;

void func_02095db0(void) {
    func_02095d50();
    func_0200509c((s32) &data_02170eac);
    func_02005008((s32) &data_02170f6c);
    M2C_FIELD(&data_02170d04, s32 *, 0x54) = 0;
    func_020959dc(0);
    M2C_FIELD(&data_02170d04, s32 *, 0x58) = 0;
    M2C_FIELD(&data_02170d04, s32 *, 0x5C) = 0;
}
