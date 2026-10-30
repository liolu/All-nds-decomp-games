#include "m2c.h"

s32 func_02010bbc(M2C_UNK *);                       /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_02043930();                                /* extern */
M2C_UNK func_02044b74();                            /* extern */
extern M2C_UNK data_020caf64;
extern M2C_UNK data_020dafa0;
extern M2C_UNK data_020dbb60;

s32 func_020438cc(void) {
    if (func_02010bbc(&data_020dbb60) != 0) {
        func_020433b4();
        return 0;
    }
    if (func_02043930() == 0) {
        if (M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *), 0x24) != NULL) {
            M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *), 0x24)(&data_020caf64);
        }
        func_02044b74();
        return 0;
    }
    return 1;
}
