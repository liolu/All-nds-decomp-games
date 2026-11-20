#include "m2c.h"

s32 func_02031fb8(M2C_UNK);                         /* extern */
extern M2C_UNK func_02034120;
extern M2C_UNK func_02034194;
extern M2C_UNK func_020341a4;
extern M2C_UNK func_020341dc;
extern M2C_UNK func_020341ec;
extern M2C_UNK func_02034214;
extern M2C_UNK func_02034218;
extern M2C_UNK func_02034234;

void func_020340a0(void *arg0, M2C_UNK arg1) {
    if (func_02031fb8(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_02034120;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_02034194;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020341a4;
        M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_020341dc;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020341ec;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_02034214;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_02034218;
    M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_02034234;
}
