/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209f324(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020a4030(void *);                      /* extern */
extern M2C_UNK data_0210430c;

void *func_0209b310(void *arg0, M2C_UNK arg1) {
    func_0209f324(arg0, arg1, 0x21, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210430c;
    M2C_FIELD(arg0, s32 *, 0x104)  = -1;
    M2C_FIELD(arg0, s32 *, 0x108)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x110)  = 0;
    M2C_FIELD(arg0, s32 *, 0x114)  = 0;
    func_020a4030(arg0 + 0x118);
    M2C_FIELD(arg0, s8 *, 0x254) = 0;
    M2C_FIELD(arg0, s8 *, 0x255) = 0;
    M2C_FIELD(arg0, s8 *, 0x90)  = 0xC;
    return arg0;
}
