/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202e0f0();                            /* extern */
M2C_UNK func_0202e5a4();                            /* extern */
M2C_UNK func_0205f25c();                     /* extern */
M2C_UNK func_0205fa78();                     /* extern */
M2C_UNK func_0205faf4();                     /* extern */

void func_02026e74(void) {
    func_0202e5a4();
    func_0202e0f0();
    func_0205faf4(4);
    func_0205fa78(8);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
    func_0205f25c(3);
    *(M2C_UNK *) 0x04001000 = (s32) ((*(M2C_UNK *) 0x04001000 & ~0x1F00) | 0x1800);
    *(u16 *) 0x0400100E     = (*(u16 *) 0x0400100E & 0x43) | 0x6080;
    *(M2C_UNK *) 0x04001000 = (s32) (*(M2C_UNK *) 0x04001000 | 0x10000);
}
