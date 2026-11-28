#include "m2c.h"

M2C_UNK func_0209aed0(s32, void *);                 /* extern */

void func_0209b5bc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    do {
        func_0209aed0(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8), arg0);
    } while (M2C_FIELD(arg0, s32 *, 0x14) != 0);
}
