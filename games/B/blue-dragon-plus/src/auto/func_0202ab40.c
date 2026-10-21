#include "m2c.h"

M2C_UNK func_0202ab60();                            /* extern */
extern s32 data_0215c0cc;

s32 func_0202ab40(void) {
    s32 temp_r0;

    func_0202ab60();
    temp_r0       = data_0215c0cc;
    data_0215c0cc = 0;
    return temp_r0;
}
