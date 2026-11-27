#include "engine.h"
#include "m2c.h"

void func_020ce768(M2C_UNK);
void func_020d422c(M2C_UNK);

extern s32 data_02110ca0;
extern s32 data_021e15fc;

void func_020d07f0(void) {
    if (data_02110ca0 != -1) {
        func_020d422c(data_02110ca0);
    }
    func_020ce768(data_021e15fc);
    data_021e15fc = 0;
}
