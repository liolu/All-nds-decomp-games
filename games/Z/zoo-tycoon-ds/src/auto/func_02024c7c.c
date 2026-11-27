/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000db0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02024d44(M2C_UNK);                     /* extern */
M2C_UNK func_0202513c(M2C_UNK);                     /* extern */
M2C_UNK func_020251b0(M2C_UNK);                     /* extern */
M2C_UNK func_0202522c();                            /* extern */
M2C_UNK func_02066ae0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02024c7c(M2C_UNK arg0) {
    func_0202522c(arg0);
    *(s16 *) 0x0400000A = 0x3E48;
    func_020251b0(arg0);
    *(s16 *) 0x0400000C = 0x3F45;
    func_0202513c(arg0);
    *(s16 *) 0x0400000E = 0x2F43;
    func_02024d44(arg0);
    func_02066ae0(1, 0, 0);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFBFFF9F) | 0x40;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1E00;
    func_02000db0(0, 1);
}
