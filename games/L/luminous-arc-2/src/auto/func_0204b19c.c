#include "m2c.h"

M2C_UNK func_0204a5f0();                            /* extern */
M2C_UNK func_0204d994(M2C_UNK);                     /* extern */
M2C_UNK func_0204d9f4(M2C_UNK);                     /* extern */
s32 func_0204da04();                                /* extern */
M2C_UNK func_0204e214(M2C_UNK);                     /* extern */
M2C_UNK func_0204e7e0(M2C_UNK);                     /* extern */
M2C_UNK func_020cd9f8();                            /* extern */
extern s8 data_02158048;
extern M2C_UNK data_02175a4c;

void func_0204b19c(void) {
    func_0204a5f0();
    if (func_0204da04() == 0) {
        if (M2C_FIELD(&data_02175a4c, u16 *, 0x1C) != 0) {
            return;
        }
        func_0204e214(0);
        return;
    }
    func_0204d9f4(0);
    func_020cd9f8();
    func_0204e7e0(1);
    func_0204d994(0);
    data_02158048 = 6;
}
