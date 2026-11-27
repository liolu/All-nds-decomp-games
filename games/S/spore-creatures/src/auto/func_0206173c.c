#include "m2c.h"

M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020cfb60(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020616dc;

void *func_0206173c(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x64);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_020cfb60(arg0 + 0x5C, 2, 4, &func_020616dc);
    func_0208acbc(arg0 + 4);
    return arg0;
}
