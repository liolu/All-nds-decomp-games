/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010be4(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020960d4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209625c(s32, M2C_UNK);                /* extern */
M2C_UNK func_020963a8();                            /* extern */
s32 func_02096658(void *);                          /* extern */
extern M2C_UNK data_02102468;

void *func_0208b514(void *arg0) {
    func_020963a8();
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102468;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    func_02010be4(arg0 + 0x20, 0, 0, 0);
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    func_02010be4(arg0 + 0x40, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s8 *, 0x64)  = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s8 *, 0x70)  = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s8 *, 0x84)  = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = func_02096658(arg0);
    func_020960d4(M2C_FIELD(arg0, s32 *, 0x5C), 0);
    func_0209625c(M2C_FIELD(arg0, s32 *, 0x5C), 0);
    return arg0;
}
