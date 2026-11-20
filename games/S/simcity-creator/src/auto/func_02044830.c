#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_0200f708(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK data_020dc720;
extern M2C_UNK func_02044874;

s32 func_02044830(void) {
    func_02043350(3);
    if (func_0200f708(&data_020dc720, &func_02044874, 2) == 2) {
        return 1;
    }
    func_020433b4();
    func_02043350(0xA);
    return 0;
}
