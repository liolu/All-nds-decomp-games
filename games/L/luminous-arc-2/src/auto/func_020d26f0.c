#include "m2c.h"

s32 func_020129a8(M2C_UNK *);                       /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_020d2754();                                /* extern */
M2C_UNK func_020d3d70();                            /* extern */
extern M2C_UNK data_021471bc;
extern M2C_UNK data_02185160;
extern M2C_UNK data_021851a0;

s32 func_020d26f0(void) {
    if (func_020129a8(&data_021851a0) != 0) {
        func_020d2104();
        return 0;
    }
    if (func_020d2754() == 0) {
        if (M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *), 0x1C) != NULL) {
            M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *), 0x1C)(&data_021471bc);
        }
        func_020d3d70();
        return 0;
    }
    return 1;
}
