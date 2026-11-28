#include "m2c.h"

extern s32 data_0215f94c;
extern s32 data_0215f954;

s32 func_02020628(void) {
    if (data_0215f94c != data_0215f954) {
        return 1;
    }
    return 0;
}
