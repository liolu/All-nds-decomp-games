#include "m2c.h"

M2C_UNK func_020aa520(s32);                         /* extern */
s32 func_020aa56c();                                /* extern */
extern M2C_UNK data_02173c18;

void func_020a6608(void) {
    if (M2C_FIELD(&data_02173c18, s32 *, 4) == 0) {
        return;
    }
    if (func_020aa56c() != 0) {
        return;
    }
    func_020aa520(M2C_FIELD(&data_02173c18, s32 *, 4));
    M2C_FIELD(&data_02173c18, s32 *, 4) = 0;
}
