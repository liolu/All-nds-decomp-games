#include "m2c.h"

extern M2C_UNK data_021d6010;

void func_020afe7c(void *arg0) {
    if (M2C_FIELD(&data_021d6010, M2C_UNK(**)(void *, void *, void *, u16), 0x28) == NULL) {
        return;
    }
    M2C_FIELD(&data_021d6010, M2C_UNK(**)(void *, void *, void *, u16), 0x28)(arg0 + 0x1E, arg0 + 0x18, arg0 + 0x2C,
                                                                              M2C_FIELD(arg0, u16 *, 6));
}
