/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203e35c(s32, s32);                    /* extern */

void func_02032e90(void *arg0) {
    func_0203e35c((M2C_FIELD(arg0, s32 *, 0x20) - 0x80000) & ~0xFFF, (M2C_FIELD(arg0, s32 *, 0x24) - 0x60000) & ~0xFFF);
}
