#include "m2c.h"

void func_02013374(void *arg0, void *arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x16) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 8) = 8;
            return;
    }
}
