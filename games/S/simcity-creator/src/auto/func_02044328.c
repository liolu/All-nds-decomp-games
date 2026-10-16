#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
M2C_UNK func_02044b74();                            /* extern */
s32 func_0200fbc0(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK func_02044360;

s32 func_02044328(void) {
    func_02043350(3);
    if (func_0200fbc0(&func_02044360, 0) == 2) {
        return 1;
    }
    func_020433b4();
    func_02044b74();
    return 0;
}
