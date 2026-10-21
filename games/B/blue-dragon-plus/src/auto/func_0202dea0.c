#include "m2c.h"

M2C_UNK func_0203a344(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0215c100;

void func_0202dea0(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0203a344(arg0, 0);
    M2C_FIELD(&data_0215c100, s32 *, 8) = (s32) (M2C_FIELD(&data_0215c100, s32 *, 8) & ~arg0);
}
