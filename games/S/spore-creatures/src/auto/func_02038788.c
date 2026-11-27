#include "m2c.h"

void func_02038788(s32 arg0, s32 arg1) {
    if (arg1 >= 6) {
        return;
    }
    *(s8 *) (arg0 + (arg1 * 0x14)) = 1;
}