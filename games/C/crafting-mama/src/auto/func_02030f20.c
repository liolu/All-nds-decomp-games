#include "m2c.h"

M2C_UNK func_02029014();                            /* extern */
extern M2C_UNK data_020a8af0;

void func_02030f20(s32 arg0) {
    if (*((M2C_UNK *) ((s8 *) &data_020a8af0 + (arg0 * 4))) == 0) {
        return;
    }
    func_02029014();
    *((M2C_UNK *) ((s8 *) &data_020a8af0 + (arg0 * 4))) = 0;
}
