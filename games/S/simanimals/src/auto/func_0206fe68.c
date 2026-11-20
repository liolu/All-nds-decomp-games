#include "engine.h"
#include "m2c.h"

void func_0206fe8c(M2C_UNK);
void func_02072530(M2C_UNK);

extern M2C_UNK data_02092b08;

void func_0206fe68(void) {
    func_02072530(1);
    M2C_FIELD(&data_02092b08, s32 *, 0xC) = 1;
    func_0206fe8c(1);
}
