#include "engine.h"
#include "m2c.h"

void func_020b204c(M2C_UNK);
void func_020b7288(M2C_UNK);

extern s32 data_020e0318;
extern M2C_UNK data_020f18cc;

void func_020b4154(void) {
    if (data_020e0318 != -1) {
        func_020b7288(data_020e0318);
    }
    func_020b204c(M2C_FIELD(&data_020f18cc, s32 *, 0x14));
    M2C_FIELD(&data_020f18cc, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_020f18cc, s32 *, 0x18) = 0;
    M2C_FIELD(&data_020f18cc, s32 *, 4)    = 0;
    M2C_FIELD(&data_020f18cc, s32 *, 0x14) = 0;
}
