#include "engine.h"
#include "m2c.h"

void func_02039ba4(M2C_UNK, M2C_UNK);
void func_02050a14(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0205d014(M2C_UNK, M2C_UNK);
void func_0205d08c(M2C_UNK, M2C_UNK);
M2C_UNK func_0205e43c(void);
void func_0205e474(M2C_UNK);

void func_0205cfa8(s32 arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        func_0205d08c(arg0, arg1);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_0205e474(arg0 + 0x2C);
    }
    temp_r0                      = func_0205e43c();
    temp_r2                      = M2C_FIELD(arg0, void **, 0x24);
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_r0;
    func_02050a14(temp_r0, M2C_FIELD(M2C_FIELD(temp_r2, void **, 0x24), s32 *, 4), M2C_FIELD(temp_r2, s32 *, 0x20));
    func_0205d014(arg0, arg1);
    func_02039ba4(arg0, arg1);
}
