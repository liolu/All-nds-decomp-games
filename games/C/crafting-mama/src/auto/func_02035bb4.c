#include "engine.h"
#include "m2c.h"

void func_020363f0(M2C_UNK, M2C_UNK);

extern s32 data_020a8c1c;

void func_02035bb4(s32 arg0) {
    if (data_020a8c1c == 0) {
        return;
    }
    func_020363f0(data_020a8c1c, arg0);
}
