#include "m2c.h"

M2C_UNK func_020d1ecc(M2C_UNK *);                   /* extern */
M2C_UNK func_020ae994();                            /* extern */
extern M2C_UNK data_021d6010;
extern M2C_UNK data_021d6014;

void func_020b016c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0) != 0x12) {
        return;
    }
    M2C_FIELD(&data_021d6010, s32 *, 0x24) = (s32) M2C_FIELD(arg0, u16 *, 2);
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        func_020ae994();
    }
    func_020d1ecc(&data_021d6014);
}
