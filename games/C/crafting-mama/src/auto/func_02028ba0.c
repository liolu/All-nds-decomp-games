#include "m2c.h"

extern s32 *data_02097640;

void func_02028ba0(s32 arg0) {
    if (data_02097640 != NULL) {
        *data_02097640 = arg0;
    }
}
