#include "m2c.h"

s32 func_02020ae8(void *, s32);                     /* extern */
s32 func_02020af4();                                /* extern */
M2C_UNK func_02020b68(void *);                      /* extern */
M2C_UNK func_02021984(void *);                      /* extern */

void func_02021ac8(void *arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1                      = func_02020af4();
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if (func_02020ae8(arg0, temp_r1) == 0) {
        func_02020b68(arg0);
    }
    func_02021984(arg0);
}
