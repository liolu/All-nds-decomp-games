#include "m2c.h"

M2C_UNK func_02040074(void *, M2C_UNK);             /* extern */
M2C_UNK func_02040168(void *);                      /* extern */
extern M2C_UNK data_020e03c4;
extern M2C_UNK data_020e03d8;
extern M2C_UNK data_020e0410;
extern M2C_UNK data_020e0444;
extern M2C_UNK data_020fbafc;

void *func_0203e828(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020e03c4;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020e0444;
    M2C_FIELD(arg0, s32 *, 4)         = 0;
    M2C_FIELD(arg0, s32 *, 8)         = -1;
    M2C_FIELD(arg0, s8 *, 0xC)        = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_020fbafc;
    if (&data_020fbafc != NULL) {
        M2C_FIELD(&data_020fbafc, s32 *, 4) = (s32) (M2C_FIELD(&data_020fbafc, s32 *, 4) + 1);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0410;
    M2C_FIELD(arg0, s8 *, 0x14)    = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e03d8;
    func_02040168(arg0 + 0x18);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s8 *, 0x40)  = 0;
    M2C_FIELD(arg0, s8 *, 0x41)  = 0;
    M2C_FIELD(arg0, s8 *, 0x42)  = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x48) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = -1;
    M2C_FIELD(arg0, s8 *, 0x50)  = 0;
    M2C_FIELD(arg0, s8 *, 0x51)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) < 8U) {
        func_02040074(arg0 + 0x18, 8);
    }
    return arg0;
}
