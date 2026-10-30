#include "m2c.h"

extern M2C_UNK data_020ca6a4;
extern M2C_UNK data_020cae54;
extern M2C_UNK data_020cae5c;
extern M2C_UNK data_020dafa0;

void func_02043350(s32 arg0) {
    if (M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *, s32), 0x24) != NULL) {
        M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *, s32),
                  0x24)(&data_020cae54, *((M2C_UNK *) ((s8 *) &data_020ca6a4 + (M2C_FIELD(&data_020dafa0, s32 *, 0x38) * 4))));
    }
    M2C_FIELD(&data_020dafa0, s32 *, 0x38) = arg0;
    if (M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *, s32), 0x24) == NULL) {
        return;
    }
    M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *, s32), 0x24)(&data_020cae5c,
                                                                 *((M2C_UNK *) ((s8 *) &data_020ca6a4 + (arg0 * 4))));
}
