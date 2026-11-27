#include "engine.h"
#include "m2c.h"

void func_020d1ce0(M2C_UNK);
void func_020d1e38(M2C_UNK);
void func_020a3874(M2C_UNK);
M2C_UNK func_020a3be8(void);

extern M2C_UNK data_021d4640;
extern M2C_UNK data_021d47e8;
extern M2C_UNK data_021d48a8;

void func_020a3c48(void) {
    func_020a3be8();
    func_020d1e38((s32) &data_021d47e8);
    func_020d1ce0((s32) &data_021d48a8);
    M2C_FIELD(&data_021d4640, s32 *, 0x54) = 0;
    func_020a3874(0);
    M2C_FIELD(&data_021d4640, s32 *, 0x58) = 0;
    M2C_FIELD(&data_021d4640, s32 *, 0x5C) = 0;
}
