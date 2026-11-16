#include "m2c.h"

s32 func_02086564(M2C_UNK);                         /* extern */
M2C_UNK func_02086734(M2C_UNK);                     /* extern */
s32 func_02086a50();                                /* extern */
M2C_UNK func_02086af0();                            /* extern */
s32 func_02086b18();                                /* extern */
s32 func_02086b60();                                /* extern */

s32 func_02086674(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02086b60() == 0) {
        return 0;
    }
    temp_r0_3 = func_02086b18();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02086a50() > 0) {
        do {

        } while (func_02086564(0) != 0);
        temp_r0_2 = func_02086b18();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02086734(1);
block_12:
    func_02086af0();
    do {
        func_02086564(1);
        temp_r0 = func_02086b18();
    } while (temp_r0 == 0);
    return temp_r0;
}
