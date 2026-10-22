/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038c24();                            /* extern */
M2C_UNK func_0203a1f0();                            /* extern */
M2C_UNK func_02054570();                     /* extern */
M2C_UNK func_020549a4();                            /* extern */
M2C_UNK func_020549b8();                            /* extern */
M2C_UNK func_02054b40();                     /* extern */
M2C_UNK func_02054bbc();                     /* extern */
M2C_UNK func_0205571c(); /* extern */

void func_0204b014(M2C_UNK arg0, s32 arg1) {
    func_02038c24();
    *(s32 *) 0x04001000 &= ~0x10000;
    func_0203a1f0();
    func_020549b8();
    func_020549a4();
    func_02054bbc(0x80);
    func_02054b40(0x100);
    *(M2C_UNK *) 0x04001000 = (s32) ((*(M2C_UNK *) 0x04001000 & 0xFFCFFFEF) | 0x10);
    func_02054570(0);
    *(M2C_UNK *) 0x04001000 = (s32) ((*(M2C_UNK *) 0x04001000 & ~0x1F00) | 0x1800);
    func_0205571c(0x04001050, 0, 8, arg0, arg1);
    *(M2C_UNK *) 0x04001000 = (s32) (*(M2C_UNK *) 0x04001000 | 0x10000);
}
