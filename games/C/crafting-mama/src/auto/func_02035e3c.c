#include "m2c.h"

M2C_UNK func_02035eec(void *);                      /* extern */

void func_02035e3c(void **arg0) {
    func_02035eec(*arg0);
    M2C_FIELD(*arg0, s32 *, 0x10) = 1;
    *arg0                         = NULL;
}
