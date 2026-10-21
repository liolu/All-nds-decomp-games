#include "m2c.h"

M2C_UNK func_0200509c(void *);                      /* extern */
extern M2C_UNK data_02170270;

void func_0207fc8c(void) {
    if (M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x1384) == 0) {
        return;
    }
    func_0200509c(M2C_FIELD(&data_02170270, void **, 8) + 0x1318);
}
