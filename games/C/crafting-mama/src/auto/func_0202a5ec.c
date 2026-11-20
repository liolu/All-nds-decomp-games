#include "m2c.h"

s32 func_0202a480(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_0202a950();                                /* extern */
void *func_020303dc();                              /* extern */
extern M2C_UNK data_020a5280;

s32 func_0202a5ec(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_020303dc();
    if (arg1 != 0) {
        return 0;
    }
    if ((M2C_FIELD(temp_r0, u16 *, 4) == 1) && (func_0202a950() == 0)) {
        return func_0202a480(arg0, &data_020a5280);
    }
    return 0;
}
