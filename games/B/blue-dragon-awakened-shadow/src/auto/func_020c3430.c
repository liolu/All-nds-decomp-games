#include "m2c.h"

M2C_UNK func_020c3690(void *);                      /* extern */
M2C_UNK func_020c3978(void *, M2C_UNK);             /* extern */
M2C_UNK func_020c3b60(void *);                      /* extern */
M2C_UNK func_020c3c50(void *);                      /* extern */
extern M2C_UNK data_02100ed4;

void *func_020c3430(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02100ed4;
    func_020c3978(arg0, 0);
    func_020c3690(arg0);
    func_020c3b60(arg0);
    func_020c3c50(arg0);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x10) = NULL;
    }
    return arg0;
}
