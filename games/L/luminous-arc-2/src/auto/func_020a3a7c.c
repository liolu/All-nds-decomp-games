#include "m2c.h"

M2C_UNK func_020a3034(s32);                         /* extern */
M2C_UNK func_020a3b54(M2C_UNK);                     /* extern */
extern M2C_UNK data_02152824;

void func_020a3a7c(void) {
    func_020a3b54(0);
    func_020a3034(M2C_FIELD(&data_02152824, s32 *, 0x200));
}
