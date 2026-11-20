#include "engine.h"
#include "m2c.h"

void func_020b2624(M2C_UNK);
void func_020b7288(M2C_UNK);

extern s32 data_020e0318;
extern s32 data_020f18b0;

void func_020b3ebc(void) {
    if (data_020e0318 != -1) {
        func_020b7288(data_020e0318);
    }
    func_020b2624(data_020f18b0);
    data_020f18b0 = 0;
}
