/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022ef8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02022f0c(M2C_UNK, s32);                /* extern */
s32 func_02022f20(M2C_UNK);                         /* extern */
s32 func_0202300c(M2C_UNK);                         /* extern */
extern s32 data_020ec5d8;

void func_020231e4(void) {
    if (data_020ec5d8 != 0) {
        return;
    }
    data_020ec5d8 = 1;
    func_02022f0c(0, func_0202300c(0));
    func_02022ef8(0, func_02022f20(0));
    func_02022ef8(2, 0);
    func_02022f0c(2, 0);
    func_02022f0c(3, func_0202300c(3));
    func_02022ef8(3, func_02022f20(3));
    func_02022f0c(4, func_0202300c(4));
    func_02022ef8(4, func_02022f20(4));
    func_02022f0c(5, func_0202300c(5));
    func_02022ef8(5, func_02022f20(5));
    func_02022f0c(6, func_0202300c(6));
    func_02022ef8(6, func_02022f20(6));
}
