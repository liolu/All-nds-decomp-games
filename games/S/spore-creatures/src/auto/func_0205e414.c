#include "m2c.h"

M2C_UNK func_02037800(void *);                      /* extern */
void *func_02093480(M2C_UNK);                       /* extern */

void *func_0205e414(void **arg0, s16 arg1) {
    void *temp_r0;

    temp_r0 = func_02093480(0x18);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, void **, 0) = NULL;
        func_02037800(temp_r0 + 4);
        M2C_FIELD(temp_r0, s16 *, 0x14) = arg1;
        M2C_FIELD(temp_r0, s8 *, 0x16)  = 1;
    }
    M2C_FIELD(temp_r0, void **, 0) = (void *) *arg0;
    *arg0                          = temp_r0;
    return temp_r0 + 4;
}
