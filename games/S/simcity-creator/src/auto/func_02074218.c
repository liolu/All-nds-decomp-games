#include "m2c.h"

M2C_UNK func_0203491c(void *);                      /* extern */
M2C_UNK func_02061c34(void *);                      /* extern */
M2C_UNK func_020621c0(void *, void *, s32);         /* extern */
extern M2C_UNK data_020cdd44;

void *func_02074218(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cdd44;
    func_020621c0(M2C_FIELD(arg0, void **, 4), arg0 + 0x1228, 0x122);
    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (temp_r4 != NULL) {
        func_02061c34(temp_r4);
        func_0203491c(temp_r4);
    }
    func_0203491c(arg0);
    return arg0;
}
