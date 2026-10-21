/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc338(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_020f5930;
extern M2C_UNK data_020f5934;
extern M2C_UNK func_020bd3c4;
extern M2C_UNK func_020bd43c;

void func_020bd9b4(void *arg0) {
    if (data_020f5930 == 0) {
        func_020bc338(&data_020f5934, 0);
        data_020f5930 = 1;
    }
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020bd43c;
    M2C_FIELD(arg0, void **, 0xC)     = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020bd3c4;
    M2C_FIELD(arg0, void **, 0x18)    = arg0;
    M2C_FIELD(arg0, s32 *, 0x44)      = 0;
    M2C_FIELD(arg0, s32 *, 0x48)      = 0;
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
}
