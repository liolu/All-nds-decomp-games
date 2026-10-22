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
M2C_UNK func_02054f80();                     /* extern */
M2C_UNK func_020550ec();                     /* extern */

void func_0204b3a8(void) {
    func_02038c24();
    func_0205464c();
    func_0203a21c();
    func_02054a08();
    func_020549f4();
    func_020549e0();
    func_020549cc();
    func_020550ec(1);
    func_02054f80(2);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    func_0205458c(1, 3, 0);
    *(M2C_UNK *) 0x04000000 = (s32) ((*(M2C_UNK *) 0x04000000 & ~0x1F00) | 0x1800);
    *(u16 *) 0x0400000E     = (*(u16 *) 0x0400000E & 0x43) | 0x6080;
    func_02054600();
}
