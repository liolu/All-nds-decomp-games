#include "m2c.h"

void func_0200f2ec(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return;
        case 1:
            return;
        case 2:
            M2C_FIELD(arg0, s32 *, 4) = 0;
            return;
    }
}
