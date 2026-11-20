#include "m2c.h"

s16 func_020048c8();                                /* extern */
M2C_UNK func_02006f34();                            /* extern */
extern s16 data_0215144e;

void func_02024eac(void) {
    s16 temp_r0;

    temp_r0 = func_020048c8();
    if (temp_r0 == -3) {
        func_02006f34();
    }
    data_0215144e = temp_r0;
}
