#include "m2c.h"

M2C_UNK func_02018250(void *);                      /* extern */

void func_02018410(void **arg0) {
    void *temp_r2;

    temp_r2                         = *arg0;
    *arg0                           = NULL;
    M2C_FIELD(temp_r2, s32 *, 0xB0) = 0;
    func_02018250(temp_r2);
}
