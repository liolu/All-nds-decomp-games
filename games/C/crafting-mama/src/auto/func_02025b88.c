#include "m2c.h"

M2C_UNK func_02025b08(M2C_UNK, M2C_UNK);            /* extern */

void func_02025b88(M2C_UNK arg0) {
    func_02025b08(0xB7, arg0);
    *(s32 *) 0x040001A4 = (*(s32 *) 0x02FFFAE0 & ~0x07000000) | 0xA1000000;
}
