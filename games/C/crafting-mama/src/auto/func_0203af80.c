#include "m2c.h"

void *func_0203af80(void *arg0) {
    s32 temp_r1;
    void *var_r0;

    var_r0  = arg0;
    temp_r1 = M2C_FIELD(M2C_FIELD(var_r0, void **, 0x58), s32 *, 0xC48);
    switch (temp_r1) {                              /* irregular */
        case 2:
            var_r0 = (void *) 4;
        /* fallthrough */
        default:
            return var_r0;
        case 1:
            return (void *) 3;
        case 0:
            return (void *) 1;
    }
}
