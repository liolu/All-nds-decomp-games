#include "m2c.h"

M2C_UNK func_0206f1d0(void *, s32);                 /* extern */
M2C_UNK func_0206ffc8(s32, M2C_UNK);                /* extern */
s32 func_0206ffd4(s32);                             /* extern */
extern M2C_UNK data_020c2b9c;

void func_0206df14(void *arg0) {
    if (func_0206ffd4(M2C_FIELD(arg0, s32 *, 8)) <= 0) {
        return;
    }
    func_0206f1d0(arg0, ((s32 *) &data_020c2b9c)[func_0206ffd4(M2C_FIELD(arg0, s32 *, 8))]);
    func_0206ffc8(M2C_FIELD(arg0, s32 *, 8), 0);
}
