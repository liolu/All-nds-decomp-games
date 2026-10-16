#include "engine.h"
#include "m2c.h"

void func_020020f4(M2C_UNK);
void func_02006c48(M2C_UNK);

extern s32 data_020c7a84;
extern s32 data_020d0ba0;

void func_02003a1c(void) {
    if (data_020c7a84 != -1) {
        func_02006c48(data_020c7a84);
    }
    func_020020f4(data_020d0ba0);
    data_020d0ba0 = 0;
}
