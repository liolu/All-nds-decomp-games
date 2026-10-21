#include "engine.h"
#include "m2c.h"

void func_020363fc(M2C_UNK, M2C_UNK);

extern s32 data_020a8c1c;

void func_02035bd8(s32 arg0) {
    if (data_020a8c1c == 0) {
        return;
    }
    func_020363fc(data_020a8c1c, arg0);
}
