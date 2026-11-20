#include "engine.h"
#include "m2c.h"

void func_020b2224(M2C_UNK);
void func_020b7288(M2C_UNK);

extern s32 data_020e0318;
extern M2C_UNK data_020f18cc;

void func_020b4240(void) {
    if (data_020e0318 != -1) {
        func_020b7288(data_020e0318);
    }
    func_020b2224(M2C_FIELD(&data_020f18cc, s32 *, 0xC));
    M2C_FIELD(&data_020f18cc, s32 *, 0xC) = 0;
    M2C_FIELD(&data_020f18cc, s32 *, 8)   = 0;
}
