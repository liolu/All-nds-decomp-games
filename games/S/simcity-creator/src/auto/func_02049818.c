#include "m2c.h"

M2C_UNK func_0209542c(s32, M2C_UNK);                /* extern */
s32 func_ov015_02171974(M2C_UNK);                   /* extern */

void func_02049818(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                       = func_ov015_02171974(arg1);
    M2C_FIELD(arg0, s32 *, 0xB48) = temp_r0;
    func_0209542c(temp_r0, 0);
    *(s32 *) 0x04001000 &= 0xFFCFFFEF;
}
