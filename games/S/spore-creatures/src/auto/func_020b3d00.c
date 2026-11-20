#include "engine.h"
#include "m2c.h"

void func_020b1ea0(M2C_UNK);
void func_020b7288(M2C_UNK);

extern s32 data_020e0318;
extern M2C_UNK data_020f18b0;

void func_020b3d00(void) {
    if (data_020e0318 != -1) {
        func_020b7288(data_020e0318);
    }
    func_020b1ea0(M2C_FIELD(&data_020f18b0, s32 *, 0x14));
    M2C_FIELD(&data_020f18b0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020f18b0, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020f18b0, s32 *, 0xC)  = 0;
}
