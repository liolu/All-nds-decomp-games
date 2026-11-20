/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038c24();                            /* extern */
M2C_UNK func_0203a21c();                            /* extern */
M2C_UNK func_0205458c();   /* extern */
M2C_UNK func_02054600();                            /* extern */
M2C_UNK func_0205464c();                            /* extern */
M2C_UNK func_020549cc();                            /* extern */
M2C_UNK func_020549e0();                            /* extern */
M2C_UNK func_020549f4();                            /* extern */
M2C_UNK func_02054a08();                            /* extern */
M2C_UNK func_02054c88();                     /* extern */
M2C_UNK func_02054d7c();                     /* extern */
M2C_UNK func_02054f80();                     /* extern */
M2C_UNK func_020550ec();                     /* extern */
M2C_UNK func_0205571c(); /* extern */

void func_0204b500(void) {
    func_02038c24();
    func_0205464c();
    func_0203a21c();
    func_02054a08();
    func_020549f4();
    func_020549e0();
    func_020549cc();
    func_02054d7c(3);
    func_02054c88(0x20);
    func_020550ec(0x10);
    func_02054f80(0x40);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    func_0205458c(1, 0, 1);
    *(M2C_UNK *) 0x04000000 = (s32) ((*(M2C_UNK *) 0x04000000 & ~0x1F00) | 0x1100);
    func_0205571c(0x04000050, 0, 0x29, 0xA, 0x10);
    *(s32 *) 0x04000540 = 3;
    *(u16 *) 0x04000060 = (*(u16 *) 0x04000060 & ~0x3000) | 8;
    *(s32 *) 0x04000580 = 0xBFFF0000;
    func_02054600();
}
