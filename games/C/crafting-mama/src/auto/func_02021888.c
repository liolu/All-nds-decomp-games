#include "m2c.h"

M2C_UNK func_02019d80(s32);                         /* extern */
s32 func_02020f44(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02021690(M2C_UNK);                         /* extern */
s32 func_020216cc();                                /* extern */
extern s32 data_02083978;

void func_02021888(void) {
    s32 temp_r4;

    func_02019d80(0x360000);
    temp_r4       = data_02083978;
    data_02083978 = 0xE;
    if (func_020216cc() != 1) {
        if (func_02020f44(2, 0) != 0) {
            do {
                func_02019d80(0x51D23);
            } while (func_02020f44(2, 0) != 0);
        }
        if (func_02021690(1) == 0) {
            do {
                func_02019d80(5);
            } while (func_02021690(1) == 0);
        }
    }
    data_02083978 = temp_r4;
}
