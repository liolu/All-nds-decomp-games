/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200ec38(M2C_UNK);                     /* extern */
M2C_UNK func_0200ec88(M2C_UNK);                     /* extern */
M2C_UNK func_0200ed0c(M2C_UNK);                     /* extern */
M2C_UNK func_0200ed54();                            /* extern */
M2C_UNK func_02066ac4(M2C_UNK);                     /* extern */

void func_0200eb88(M2C_UNK arg0) {
    func_0200ed54();
    *(s16 *) 0x04001008 = 0x264F;
    func_0200ed0c(arg0);
    *(s16 *) 0x0400100C = 0x254A;
    func_0200ec88(arg0);
    *(s16 *) 0x0400100E = 0x2745;
    func_0200ec38(arg0);
    func_02066ac4(0);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x60) | 0x40;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1D00;
}
