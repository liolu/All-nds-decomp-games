/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209f324(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020a4030(void *);                      /* extern */
extern M2C_UNK data_0210ec30;

void *func_020e9ee4(void *arg0, M2C_UNK arg1) {
    func_0209f324(arg0, arg1, 0xA, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210ec30;
    M2C_FIELD(arg0, s32 *, 0x104)  = -1;
    M2C_FIELD(arg0, s32 *, 0x108)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10C)  = 0;
    func_020a4030(arg0 + 0x110);
    return arg0;
}
