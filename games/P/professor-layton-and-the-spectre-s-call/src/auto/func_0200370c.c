#include "m2c.h"

M2C_UNK func_02018690(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02031a48;

void func_0200370c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02018690(arg0, 0);
    M2C_FIELD(&data_02031a48, s32 *, 8) = (s32) (M2C_FIELD(&data_02031a48, s32 *, 8) & ~arg0);
}
