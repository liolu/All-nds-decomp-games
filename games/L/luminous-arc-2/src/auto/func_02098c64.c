#include "m2c.h"

M2C_UNK func_02098c14(void *);                      /* extern */
M2C_UNK func_020a0214(void *);                      /* extern */
extern M2C_UNK data_02147904;

void func_02098c64(void) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&data_02147904, void **, 4), void **, 0xA4);
    if (temp_r4 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r4, u8 *, 9) != 0) {
        func_020a0214(temp_r4);
    }
    func_02098c14(temp_r4);
}
