/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f35c();                            /* extern */
M2C_UNK func_020111a0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02011224();                            /* extern */
M2C_UNK func_02011274();                            /* extern */
M2C_UNK func_020112ac(M2C_UNK);                     /* extern */
s8 func_0207ca20();                                 /* extern */
extern M2C_UNK data_0210ee88;
extern s32 data_02126760;

void *func_020ed5ac(void *arg0, s32 arg1) {
    func_0200f35c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210ee88;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = -1;
    M2C_FIELD(arg0, s32 *, 0x30)   = -1;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x40)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s32 *, 0x4C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x50)   = 0;
    M2C_FIELD(arg0, s32 *, 0x54)   = 0;
    M2C_FIELD(arg0, s32 *, 0x58)   = 0;
    M2C_FIELD(arg0, s32 *, 0x5C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x60)   = 0;
    M2C_FIELD(arg0, s32 *, 0x64)   = 0;
    M2C_FIELD(arg0, s8 *, 0x68)    = 0;
    M2C_FIELD(arg0, s32 *, 0x74)   = -1;
    M2C_FIELD(arg0, s32 *, 0x78)   = -1;
    M2C_FIELD(arg0, s8 *, 0x7C)    = 1;
    M2C_FIELD(arg0, s32 *, 0x98)   = 0;
    M2C_FIELD(arg0, s8 *, 0x7D)    = func_0207ca20();
    M2C_FIELD(arg0, s32 *, 0x84)   = 1;
    if (arg1 != 0) {
        func_02011224();
        func_020112ac(0x20);
        func_020112ac(0x11);
        func_020112ac(0x79);
        func_020112ac(0x7B);
        func_02011274();
        data_02126760 = 0xA;
        func_020111a0(0x11, 0x7F, 0);
    }
    return arg0;
}
