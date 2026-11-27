#include "m2c.h"

void *func_0201b920();                              /* extern */

void func_02013034(void *arg0) {
    void *temp_r0;

    temp_r0                  = func_0201b920();
    M2C_FIELD(arg0, s8 *, 0) = (s8) M2C_FIELD(temp_r0, s8 *, 0);
    M2C_FIELD(arg0, s8 *, 1) = (s8) M2C_FIELD(temp_r0, s8 *, 1);
}
