#include "m2c.h"

M2C_UNK func_02095b54(s32, void *);                 /* extern */

void *func_02095d20(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_02095b54(M2C_FIELD(arg0, s32 *, 4), arg0);
    }
    return arg0;
}
