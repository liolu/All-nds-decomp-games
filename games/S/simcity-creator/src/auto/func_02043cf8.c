#include "m2c.h"

M2C_UNK func_020433b4();                            /* extern */
s32 func_0200fab4(M2C_UNK *);                       /* extern */
extern M2C_UNK func_02043d20;

s32 func_02043cf8(void) {
    if (func_0200fab4(&func_02043d20) == 2) {
        return 1;
    }
    func_020433b4();
    return 0;
}
