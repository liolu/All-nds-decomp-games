#include "m2c.h"

extern s32 *data_02097640;

s32 func_02028d10(void) {
    if (data_02097640 == NULL) {
        return 0;
    }
    return *data_02097640;
}
