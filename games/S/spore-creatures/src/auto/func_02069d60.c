#include "m2c.h"

s32 func_02093480(s32);                             /* extern */
M2C_UNK func_020021f0();                            /* extern */
M2C_UNK func_020c1148();                            /* extern */
M2C_UNK func_020c3c24(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020df738;

void func_02069d60(void *arg0, u32 arg1) {
    s32 temp_r0;

    if (arg1 > 0x1FFFFFFFU) {
        func_020021f0();
    }
    temp_r0 = func_02093480(arg1 * 8);
    if (temp_r0 == 0) {
        func_020c3c24(&data_020df738);
        func_020c1148();
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
