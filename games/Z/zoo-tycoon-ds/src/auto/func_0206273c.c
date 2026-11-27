/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK *func_0200190c(M2C_UNK);                    /* extern */
s32 func_02001ae0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02001af4(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02008824(void *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02008f8c(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02009134(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020cdfe0;
extern M2C_UNK data_020cdff4;
extern s32 data_0217ff60;
extern s32 data_0217ff64;

void func_0206273c(void *arg0) {
    data_0217ff64                 = 0;
    data_0217ff60                 = 0;
    M2C_FIELD(arg0, s32 *, 0x45C) = 0;
    M2C_FIELD(arg0, s32 *, 0x45C) = (s32) data_0217ff60;
    func_02001af4(&data_020cdfe0, arg0 + 0x150);
    func_02008824(arg0 + 0x15C, func_02001ae0(arg0 + 0x150, 0), 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x464) = (s32) data_0217ff60;
    func_02001af4(&data_020cdff4, arg0 + 0x150);
    func_02008824(arg0 + 0x2DC, func_02001ae0(arg0 + 0x150, 0), 0, 0, 0);
    func_02001af4(func_0200190c(0xB), arg0 + 0x150);
    func_02008824(arg0 + 0x200, func_02001ae0(arg0 + 0x150, 1), 0, 0, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28C), s32 *, 0x20) = -0x3E00;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28C), s32 *, 0x28) = 0x2000;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28C), s32 *, 0x24) = 0x300;
    M2C_FIELD(arg0, s32 *, 0x2C4)                           = (s32) data_0217ff64;
    func_02008f8c(6, data_0217ff64, 0);
    func_02001af4(func_0200190c(0xB), arg0 + 0x150);
    func_02008824(arg0 + 0x380, func_02001ae0(arg0 + 0x150, 1), 0, 0, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40C), s32 *, 0x20) = 0x4200;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40C), s32 *, 0x28) = 0x2000;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40C), s32 *, 0x24) = 0x300;
    M2C_FIELD(arg0, s32 *, 0x444)                           = (s32) data_0217ff64;
    func_02008f8c(7, data_0217ff64, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x248), s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x2C4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C8), s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x444);
    M2C_FIELD(arg0, s32 *, 0x2C8)                           = (s32) data_0217ff60;
    func_02009134(0x11C, data_0217ff60, 0);
    M2C_FIELD(arg0, s32 *, 0x448) = (s32) data_0217ff60;
    func_02009134(0x11D, data_0217ff60, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x258), s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x2C8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3D8), s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x448);
    M2C_FIELD(arg0, s32 *, 0x2BC)                        = (s32) data_0217ff64;
    func_02008f8c(1, data_0217ff64, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1A4), s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x2BC);
    M2C_FIELD(arg0, s32 *, 0x45C)                           = (s32) data_0217ff60;
    func_02009134(0x117, data_0217ff60, 0);
    M2C_FIELD(arg0, s32 *, 0x43C) = (s32) data_0217ff64;
    func_02008f8c(3, data_0217ff64, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x324), s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x43C);
    M2C_FIELD(arg0, s32 *, 0x464)                           = (s32) data_0217ff60;
    func_02009134(0x119, data_0217ff60, 0);
    M2C_FIELD(arg0, s32 *, 0x460) = (s32) data_0217ff60;
    func_02009134(0x118, data_0217ff60, 0);
    M2C_FIELD(arg0, s32 *, 0x468) = (s32) data_0217ff60;
    func_02009134(0x11A, data_0217ff60, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = 0x2000;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x368), s32 *, 0x28) = 0x2000;
    M2C_FIELD(arg0, s32 *, 0xB8)                            = 0;
    M2C_FIELD(arg0, s32 *, 0xBC)                            = 0;
    M2C_FIELD(arg0, s32 *, 0x2CC)                           = 0;
    M2C_FIELD(arg0, s32 *, 0x2D0)                           = 0;
    M2C_FIELD(arg0, s16 *, 0x2D4)                           = 0x80;
    M2C_FIELD(arg0, s16 *, 0x2D6)                           = 0xC0;
    M2C_FIELD(arg0, s32 *, 0x44C)                           = 0x80;
    M2C_FIELD(arg0, s32 *, 0x450)                           = 0;
    M2C_FIELD(arg0, s16 *, 0x454)                           = 0x80;
    M2C_FIELD(arg0, s16 *, 0x456)                           = 0xC0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1B4), s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x460);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x334), s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x464);
}
