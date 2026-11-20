/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202e5d0();                            /* extern */
M2C_UNK func_0205f278();   /* extern */
M2C_UNK func_0205feb8();                     /* extern */
M2C_UNK func_0205ff70();                     /* extern */
M2C_UNK func_02060084();                     /* extern */
M2C_UNK func_020601f0();                     /* extern */

void func_0200fc0c(void) {
    func_0202e5d0();
    func_020601f0(1);
    func_02060084(2);
    func_0205ff70(0x10);
    func_0205feb8(0x40);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    func_0205f278(1, 3, 0);
    *(M2C_UNK *) 0x04000000 = (s32) ((*(M2C_UNK *) 0x04000000 & ~0x1F00) | 0x1800);
    *(u16 *) 0x0400000E     = (*(u16 *) 0x0400000E & 0x43) | 0x6080;
}
