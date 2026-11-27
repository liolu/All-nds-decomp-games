#include "m2c.h"

extern u8 data_02103910;
extern s32 data_02126cc0;

s32 func_02095f10(void) {
    if (data_02103910 != 0) {
        return data_02126cc0;
    }
    return 0;
}
