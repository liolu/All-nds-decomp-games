#include "m2c.h"

s32 func_02091ad4(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 1:
            return M2C_FIELD(arg0, s32 *, 8);
        case 2:
            return M2C_FIELD(arg0, s32 *, 0xC);
        case 3:
            return M2C_FIELD(arg0, s32 *, 0x10);
        default:
            return 0;
    }
}
