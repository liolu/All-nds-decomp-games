#include "m2c.h"

M2C_UNK func_020173a8(s32);                         /* extern */
s32 func_0201a5fc(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0201ad14(M2C_UNK);                         /* extern */
s32 func_0201ad50();                                /* extern */
extern s32 data_020314f0;

void func_0201af64(void) {
    s32 temp_r4;

    func_020173a8(0x360000);
    temp_r4       = data_020314f0;
    data_020314f0 = 0xE;
    if (func_0201ad50() != 1) {
        if (func_0201a5fc(2, 0) != 0) {
            do {
                func_020173a8(0x51D23);
            } while (func_0201a5fc(2, 0) != 0);
        }
        if (func_0201ad14(1) == 0) {
            do {
                func_020173a8(5);
            } while (func_0201ad14(1) == 0);
        }
    }
    data_020314f0 = temp_r4;
}
