#include "m2c.h"

M2C_UNK func_0205c560(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_0205c8bc(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_020d53f0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020d573c(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_0216be68;

void func_020d503c(M2C_UNK arg0) {
    func_0205c560(M2C_FIELD(&data_0216be68, s32 *, 0x48), 0xF0, 0x62, 1, 0x188, 0x35, 2, 0xA);
    func_0205c560(M2C_FIELD(&data_0216be68, s32 *, 0x2C), 0xC8, 0x22, 1, 0xC0, 7, 2, 0xA);
    func_0205c560(M2C_FIELD(&data_0216be68, s32 *, 0x30), 0xA0, 0x42, 1, 0xE8, 0x11, 2, 0xA);
    func_0205c560(M2C_FIELD(&data_0216be68, s32 *, 0x34), 0xD0, 0x62, 1, 0x168, 0x31, 2, 0xA);
    func_0205c8bc(func_020d53f0(1, arg0), 0xA0, 0x82, 1, 0x198, 0x36, 2, 0xA);
    func_0205c560(M2C_FIELD(&data_0216be68, s32 *, 0x3C), 0xAC, 0xA2, 1, 0x1F0, 0x41, 2, 0xA);
    func_020d573c(1, arg0);
}
