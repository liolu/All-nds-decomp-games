#include "m2c.h"

extern s32 data_0216af90;

s32 func_02025ed8(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0216af90;
    data_0216af90 = arg0;
    return temp_r2;
}
