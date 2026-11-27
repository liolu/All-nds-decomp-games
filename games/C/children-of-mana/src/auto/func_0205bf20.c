/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bc3c(M2C_UNK, s32);                /* extern */
M2C_UNK func_0205bc50(M2C_UNK, s32);                /* extern */
s32 func_0205bc64(M2C_UNK);                         /* extern */
s32 func_0205bd4c(M2C_UNK);                         /* extern */
extern s32 data_0211b26c;

void func_0205bf20(void) {
    if (data_0211b26c != 0) {
        return;
    }
    data_0211b26c = 1;
    func_0205bc50(0, func_0205bd4c(0));
    func_0205bc3c(0, func_0205bc64(0));
    func_0205bc3c(2, 0);
    func_0205bc50(2, 0);
    func_0205bc50(3, func_0205bd4c(3));
    func_0205bc3c(3, func_0205bc64(3));
    func_0205bc50(4, func_0205bd4c(4));
    func_0205bc3c(4, func_0205bc64(4));
    func_0205bc50(5, func_0205bd4c(5));
    func_0205bc3c(5, func_0205bc64(5));
    func_0205bc50(6, func_0205bd4c(6));
    func_0205bc3c(6, func_0205bc64(6));
}
