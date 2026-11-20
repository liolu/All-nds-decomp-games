#include "m2c.h"

s32 func_0202f5dc(M2C_UNK);                         /* extern */
extern M2C_UNK func_02031638;
extern M2C_UNK func_020316ac;
extern M2C_UNK func_020316bc;
extern M2C_UNK func_020316f4;
extern M2C_UNK func_02031704;
extern M2C_UNK func_0203172c;
extern M2C_UNK func_02031730;
extern M2C_UNK func_0203174c;

void func_020315b8(void *arg0, M2C_UNK arg1) {
    if (func_0202f5dc(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_02031638;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020316ac;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020316bc;
        M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_020316f4;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_02031704;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0203172c;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_02031730;
    M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_0203174c;
}
