#include "m2c.h"

M2C_UNK func_020861a0(void *);                      /* extern */
M2C_UNK func_02086498(s32);                         /* extern */
extern M2C_UNK data_020ce9a0;

void *func_02085910(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ce9a0;
    func_02086498(arg0 + 0x18);
    func_020861a0(arg0 + 0x78);
    func_020861a0(arg0 + 0x84);
    func_020861a0(arg0 + 0x90);
    func_020861a0(arg0 + 0x9C);
    func_020861a0(arg0 + 0xA8);
    func_020861a0(arg0 + 0xB4);
    M2C_FIELD(arg0, s8 *, 4)     = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    return arg0;
}
