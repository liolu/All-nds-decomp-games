/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001a70();                            /* extern */
extern M2C_UNK data_020ce12c;

void func_02020e4c(void) {
    M2C_FIELD(&data_020ce12c, s32 *, 0x14) = (s32) M2C_FIELD(&data_020ce12c, s32 *, 0x24);
    func_02001a70();
    *(s16 *) 0x04000208 = 0;
    *(u16 *) 0x04000210 &= ~2;
    *(u16 *) 0x04000004 &= ~0x10;
    *(s16 *) 0x04000208 = 1;
    *(s16 *) 0x04000016 = 0;
}
