/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000db0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020488e8();                            /* extern */
M2C_UNK func_02066ae0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0206738c(M2C_UNK);                     /* extern */

void func_02048854(void) {
    func_020488e8();
    *(s16 *) 0x04000008 = 0x3CD6;
    func_0206738c(0xB);
    func_02066ae0(0xE, 0, 1);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFBFFF9F) | 0x40;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x100;
    func_02000db0(0, 1);
}
