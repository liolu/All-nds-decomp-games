#include "m2c.h"

M2C_UNK func_02035200();                            /* extern */
M2C_UNK func_0207b9f8(void *);                      /* extern */

void func_0207bb80(void *arg0) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0x28) != 0)) {
        func_02035200();
        func_0207b9f8(arg0);
    }
}
