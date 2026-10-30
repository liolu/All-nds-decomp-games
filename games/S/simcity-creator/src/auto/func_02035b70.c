#include "m2c.h"

s16 func_02046cbc();                                /* extern */
M2C_UNK func_020533bc(s32);                         /* extern */

void func_02035b70(void *arg0) {
    func_020533bc(*M2C_FIELD(arg0, s32 **, 0x269DC));
    M2C_FIELD(arg0, s16 *, 0x94) = func_02046cbc();
}
