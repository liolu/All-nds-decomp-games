/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000db0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200ee80(M2C_UNK);                     /* extern */
M2C_UNK func_0200ee84(M2C_UNK);                     /* extern */
M2C_UNK func_0200eecc(M2C_UNK);                     /* extern */
M2C_UNK func_0200eed0(M2C_UNK);                     /* extern */
M2C_UNK func_0200ef50();                            /* extern */
M2C_UNK func_02066ae0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0200ed9c(M2C_UNK arg0) {
    func_0200ef50(arg0);
    *(s16 *) 0x04000008 = 0x3CD6;
    func_0200eed0(arg0);
    *(s16 *) 0x0400000A = 0x2641;
    func_0200eecc(arg0);
    *(s16 *) 0x0400000C = 0x2744;
    func_0200ee84(arg0);
    *(s16 *) 0x0400000E = 0x3B41;
    func_0200ee80(arg0);
    func_02066ae0(0xE, 0, 1);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFBFFF9F) | 0x40;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1F00;
    func_02000db0(0, 0);
}
