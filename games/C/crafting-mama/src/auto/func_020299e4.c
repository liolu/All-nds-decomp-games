#include "m2c.h"

extern M2C_UNK *data_020a5270;
extern M2C_UNK func_02029a0c;
extern M2C_UNK func_02029a6c;

void func_020299e4(void) {
    if (data_020a5270 != &func_02029a0c) {
        data_020a5270 = &func_02029a6c;
    }
}
