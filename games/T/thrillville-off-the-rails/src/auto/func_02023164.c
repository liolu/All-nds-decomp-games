/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02022968();                                /* extern */
M2C_UNK func_02022ef8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02022f0c(M2C_UNK, s32);                /* extern */
s32 func_02022f20(M2C_UNK);                         /* extern */
s32 func_0202300c(M2C_UNK);                         /* extern */
M2C_UNK func_020237f4(s32);                         /* extern */
M2C_UNK func_020237fc(s32);                         /* extern */
extern s32 data_020ec5dc;

void func_02023164(void) {
    func_02022f0c(2, func_0202300c(2));
    func_02022ef8(2, func_02022f20(2));
    if ((data_020ec5dc != 0) && ((func_02022968() & 3) != 1)) {
        return;
    }
    func_020237f4(0x0200002B);
    func_020237fc(0x023E0021);
}
