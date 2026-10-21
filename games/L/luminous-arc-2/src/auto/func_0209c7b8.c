#include "m2c.h"

M2C_UNK func_0200536c(M2C_UNK);                     /* extern */
s32 func_02006c44();                                /* extern */
extern s32 data_02170d54;
extern s32 data_02172544;
extern s32 data_02172548;

s32 func_0209c7b8(void) {
    if (data_02170d54 == 0) {
        if (((data_02172548 & 3) == 1) && (func_02006c44() != 0x12)) {
            func_0200536c(0xA);
        }
    } else if (data_02172544 == 0) {
        data_02172544 = data_02170d54;
    }
    return data_02170d54;
}
