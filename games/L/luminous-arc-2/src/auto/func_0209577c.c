#include "m2c.h"

M2C_UNK func_02005130(M2C_UNK *);                   /* extern */
M2C_UNK func_02093fa4();                            /* extern */
extern M2C_UNK data_02170cc4;
extern M2C_UNK data_02170cc8;

void func_0209577c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0) != 0x12) {
        return;
    }
    M2C_FIELD(&data_02170cc4, s32 *, 0x24) = (s32) M2C_FIELD(arg0, u16 *, 2);
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        func_02093fa4();
    }
    func_02005130(&data_02170cc8);
}
