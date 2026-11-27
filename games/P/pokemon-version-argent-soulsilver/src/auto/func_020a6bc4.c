#include "m2c.h"

M2C_UNK func_020a6b74(void *);                      /* extern */
M2C_UNK func_020ab890(void *);                      /* extern */
extern M2C_UNK data_021e16c0;

void func_020a6bc4(void) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 4), void **, 0xA4);
    if (temp_r4 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r4, u8 *, 9) != 0) {
        func_020ab890(temp_r4);
    }
    func_020a6b74(temp_r4);
}
