#include "m2c.h"

M2C_UNK func_020420fc(void *);                      /* extern */

void *func_02042038(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_020420fc(arg0 + 8);
    return arg0;
}
