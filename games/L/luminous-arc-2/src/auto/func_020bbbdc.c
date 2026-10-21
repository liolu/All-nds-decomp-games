#include "m2c.h"

M2C_UNK func_020aa72c(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern s32 data_021741fc;
extern M2C_UNK func_020bbbcc;

void func_020bbbdc(void *arg0) {
    if (data_021741fc == 1) {
        return;
    }
    data_021741fc = 1;
    func_020aa72c(M2C_FIELD(arg0, s32 *, 0xC), &func_020bbbcc, 0);
    data_021741fc = 0;
}
