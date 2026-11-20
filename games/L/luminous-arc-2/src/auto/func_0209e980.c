#include "m2c.h"

M2C_UNK func_0209d3a8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0209e478(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0209e754(void *);                      /* extern */
M2C_UNK func_0209e7b4(void *);                      /* extern */

void func_0209e980(void *arg0, M2C_UNK arg1) {
    func_0209e478(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x81C));
    func_0209e754(arg0);
    func_0209d3a8(arg0, 0, 0);
    func_0209e7b4(arg0);
    M2C_FIELD(arg0, s8 *, 0x455) = 5;
}
