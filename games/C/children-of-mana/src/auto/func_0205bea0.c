/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205b64c();                                /* extern */
M2C_UNK func_0205bc3c(M2C_UNK, s32);                /* extern */
M2C_UNK func_0205bc50(M2C_UNK, s32);                /* extern */
s32 func_0205bc64(M2C_UNK);                         /* extern */
s32 func_0205bd4c(M2C_UNK);                         /* extern */
M2C_UNK func_0205c4b0(s32);                         /* extern */
M2C_UNK func_0205c4b8(s32);                         /* extern */
extern s32 data_0211b270;

void func_0205bea0(void) {
    func_0205bc50(2, func_0205bd4c(2));
    func_0205bc3c(2, func_0205bc64(2));
    if ((data_0211b270 != 0) && ((func_0205b64c() & 3) != 1)) {
        return;
    }
    func_0205c4b0(0x0200002B);
    func_0205c4b8(0x023E0021);
}
