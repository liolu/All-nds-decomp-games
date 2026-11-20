#include "m2c.h"

M2C_UNK func_02062ae0();                            /* extern */
M2C_UNK func_02064a50(s32);                         /* extern */

void func_0206bf44(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02062ae0(arg0);
    }
    func_02064a50(M2C_FIELD(arg1, s32 *, 4));
}
