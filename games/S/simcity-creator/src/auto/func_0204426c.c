/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

s32 func_02010bbc(M2C_UNK *);                       /* extern */
M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_020442c4();                                /* extern */
extern M2C_UNK data_020dafa0;
extern M2C_UNK data_020dbb60;

s32 func_0204426c(void) {
    if (M2C_FIELD(&data_020dafa0, s32 *, 0x38) != 6) {
        return 0;
    }
    func_02043350(3);
    if (func_02010bbc(&data_020dbb60) != 0) {
        func_020433b4();
        return 0;
    }
    if (func_020442c4() == 0) {
        return 0;
    }
    return 1;
}
