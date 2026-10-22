/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038c24();                            /* extern */
M2C_UNK func_0203a1f0();                            /* extern */
M2C_UNK func_02054570();                     /* extern */
M2C_UNK func_02054954();                            /* extern */
M2C_UNK func_0205497c();                            /* extern */
M2C_UNK func_020549a4();                            /* extern */
M2C_UNK func_020549b8();                            /* extern */
M2C_UNK func_02054b40();                     /* extern */
M2C_UNK func_02054bbc();                     /* extern */

void func_0204b2f4(void) {
    func_02038c24();
    *(s32 *) 0x04001000 &= ~0x10000;
    func_0203a1f0();
    func_020549b8();
    func_020549a4();
    func_0205497c();
    func_02054954();
    func_02054bbc(4);
    func_02054b40(8);
    *(M2C_UNK *) 0x04001000 = (s32) ((*(M2C_UNK *) 0x04001000 & 0xFFCFFFEF) | 0x10);
    func_02054570(3);
    *(M2C_UNK *) 0x04001000 = (s32) ((*(M2C_UNK *) 0x04001000 & ~0x1F00) | 0x1800);
    *(u16 *) 0x0400100E     = (*(u16 *) 0x0400100E & 0x43) | 0x4080;
    *(M2C_UNK *) 0x04001000 = (s32) (*(M2C_UNK *) 0x04001000 | 0x10000);
}
