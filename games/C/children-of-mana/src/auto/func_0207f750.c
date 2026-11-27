/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0201ba54(void *);                      /* extern */
M2C_UNK func_0201cd6c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02024804(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02092830(void *, s32);                 /* extern */
extern M2C_UNK data_020ffdf8;

void *func_0207f750(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_02024804(arg0, 0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffdf8;
    M2C_FIELD(arg0, s32 *, 0x3B4)  = 0;
    M2C_FIELD(arg0, s32 *, 0x3B8)  = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x3BC)  = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x3C0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4)  = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C8)  = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC)  = arg3;
    M2C_FIELD(arg0, s32 *, 0x3D0)  = arg4;
    func_02001cc8(arg0 + 0x3D4, 0, 0x58);
    M2C_FIELD(arg0, s32 *, 0xE8) = 0x8000;
    func_0201cd6c(arg0, 0x5000);
    func_0201ba54(arg0);
    M2C_FIELD(arg0, s8 *, 0x232) = 0;
    func_02092830(arg0 + 0x3D4, arg5);
    return arg0;
}
