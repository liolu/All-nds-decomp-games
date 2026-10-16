#include "m2c.h"

M2C_UNK func_02014978();                            /* extern */
M2C_UNK func_02017340(s32);                         /* extern */

void func_0201ed68(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02014978(arg0);
    }
    func_02017340(M2C_FIELD(arg1, s32 *, 4));
}
