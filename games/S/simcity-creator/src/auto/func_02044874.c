#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_0200f274(M2C_UNK *);                       /* extern */
extern M2C_UNK func_02044810;

void func_02044874(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020433b4();
        func_02043350(0xA);
        return;
    }
    if (func_0200f274(&func_02044810) != 0) {
        func_020433b4();
        func_02043350(0xA);
        return;
    }
    func_02043350(1);
}
