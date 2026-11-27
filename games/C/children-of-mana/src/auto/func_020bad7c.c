/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bee74(void *, M2C_UNK);             /* extern */
M2C_UNK func_020c3408(void *);                      /* extern */
extern M2C_UNK data_0210875c;
extern M2C_UNK data_021087fc;

void *func_020bad7c(void *arg0, s8 arg1) {
    func_020bee74(arg0, 0x178);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021087fc;
    func_020c3408(arg0 + 0xF8);
    M2C_FIELD(arg0, s32 *, 0x11C)      = -1;
    M2C_FIELD(arg0, s32 *, 0x120)      = 0;
    M2C_FIELD(arg0, s32 *, 0x124)      = 0;
    M2C_FIELD(arg0, s32 *, 0x128)      = 0;
    M2C_FIELD(arg0, s32 *, 0x12C)      = 0;
    M2C_FIELD(arg0, s16 *, 0x130)      = -1;
    M2C_FIELD(arg0, s16 *, 0x132)      = -1;
    M2C_FIELD(arg0, s16 *, 0x134)      = -1;
    M2C_FIELD(arg0, s16 *, 0x136)      = -1;
    M2C_FIELD(arg0, s16 *, 0x138)      = -1;
    M2C_FIELD(arg0, s32 *, 0x13C)      = -1;
    M2C_FIELD(arg0, s32 *, 0x140)      = -1;
    M2C_FIELD(arg0, s16 *, 0x144)      = -1;
    M2C_FIELD(arg0, s16 *, 0x146)      = -1;
    M2C_FIELD(arg0, s8 *, 0x148)       = 0;
    M2C_FIELD(arg0, s8 *, 0x149)       = 0;
    M2C_FIELD(arg0, s32 *, 0x14C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x150)      = 0;
    M2C_FIELD(arg0, s8 *, 0x154)       = 0;
    M2C_FIELD(arg0, s8 *, 0x155)       = 0;
    M2C_FIELD(arg0, s8 *, 0x156)       = 0;
    M2C_FIELD(arg0, s8 *, 0x157)       = 0;
    M2C_FIELD(arg0, s32 *, 0x158)      = 0;
    M2C_FIELD(arg0, s32 *, 0x15C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x160)      = 0;
    M2C_FIELD(arg0, s16 *, 0x164)      = 0x7FFF;
    M2C_FIELD(arg0, s8 *, 0x166)       = arg1;
    M2C_FIELD(arg0, s32 *, 0xFC)       = 0x3C000;
    M2C_FIELD(arg0, s32 *, 0x100)      = 0x1000;
    M2C_FIELD(arg0, M2C_UNK **, 0x10C) = &data_0210875c;
    return arg0;
}
