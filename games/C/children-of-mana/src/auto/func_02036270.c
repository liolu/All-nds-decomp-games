/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8();              /* extern */
s32 func_0203cf10();               /* extern */
M2C_UNK func_02040040();             /* extern */
extern M2C_UNK data_020fdf9c;

void func_02036270(void *arg0) {
    if (func_0203cf10(arg0 + 0x7F4, arg0 + 0x560, 0x40) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x7A1) != 0) {
        return;
    }
    M2C_FIELD(arg0, void **, 0x7F0) = (void *) (arg0 + 0x7F4);
    M2C_FIELD(arg0, void **, 0x7AC) = (void *) (arg0 + 0x7E4);
    func_0200e8c8(&data_020fdf9c, M2C_FIELD(arg0, s32 *, 0x7C8));
    func_02040040(arg0 + 0x7A4, 0);
}
