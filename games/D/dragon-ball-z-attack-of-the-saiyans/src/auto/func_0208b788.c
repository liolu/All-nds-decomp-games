#include "m2c.h"

M2C_UNK func_02086294(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020ddb80;

void func_0208b788(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02086294(arg0, 0);
    M2C_FIELD(&data_020ddb80, s32 *, 8) = (s32) (M2C_FIELD(&data_020ddb80, s32 *, 8) & ~arg0);
}
