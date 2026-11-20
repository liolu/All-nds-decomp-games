#include "engine.h"
#include "m2c.h"

void func_020024c8(M2C_UNK);
void func_02007218(M2C_UNK);

extern s32 data_020ee404;
extern s32 data_02147840;

void func_02003d94(void) {
    if (data_020ee404 != -1) {
        func_02007218(data_020ee404);
    }
    func_020024c8(data_02147840);
    data_02147840 = 0;
}
