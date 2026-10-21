#include "m2c.h"

M2C_UNK func_02007d14(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02169fe0;

void func_02025150(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02007d14(arg0, 0);
    M2C_FIELD(&data_02169fe0, s32 *, 8) = (s32) (M2C_FIELD(&data_02169fe0, s32 *, 8) & ~arg0);
}
