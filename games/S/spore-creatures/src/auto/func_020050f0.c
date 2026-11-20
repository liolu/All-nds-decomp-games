#include "engine.h"
#include "m2c.h"

void func_0200517c(M2C_UNK, M2C_UNK);
void func_02005278(M2C_UNK);

void func_020050f0(s32 arg0) {
    u32 temp_r2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= (u32) (M2C_FIELD(arg0, s32 *, 8) * 8)) {
        func_02005278(arg0 + 4);
    }
    temp_r2                   = M2C_FIELD(arg0, u32 *, 0) + 1;
    M2C_FIELD(arg0, u32 *, 0) = temp_r2;
    func_0200517c(arg0, temp_r2 - 1);
}
