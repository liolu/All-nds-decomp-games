#include "m2c.h"

M2C_UNK func_0209542c(s32, M2C_UNK);                /* extern */

void func_02023824(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x62E8) = arg1;
    func_0209542c(arg1, 0);
    *(s32 *) 0x04001000 &= 0xFFCFFFEF;
}
