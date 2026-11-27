#include "m2c.h"

M2C_UNK func_020d2108(M2C_UNK);                     /* extern */
s32 func_020d3a9c();                                /* extern */
extern s32 data_021d4690;
extern s32 data_021d4444;
extern s32 data_021d4448;

s32 func_020a2c10(void) {
    if (data_021d4690 == 0) {
        if (((data_021d4448 & 3) == 1) && (func_020d3a9c() != 0x12)) {
            func_020d2108(0xA);
        }
    } else if (data_021d4444 == 0) {
        data_021d4444 = data_021d4690;
    }
    return data_021d4690;
}
