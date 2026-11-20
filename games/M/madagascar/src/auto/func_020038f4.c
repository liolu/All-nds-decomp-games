#include "m2c.h"

extern s32 data_020cf844;
extern s32 data_020cf84c;

s32 func_020038f4(void) {
    if (data_020cf844 != data_020cf84c) {
        return 1;
    }
    return 0;
}
