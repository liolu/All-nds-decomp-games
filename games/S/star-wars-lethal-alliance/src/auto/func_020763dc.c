/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207a444(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_020eb0b8;
extern M2C_UNK data_020eb0bc;
extern M2C_UNK func_02075dec;
extern M2C_UNK func_02075e64;

void func_020763dc(void *arg0) {
    if (data_020eb0b8 == 0) {
        func_0207a444(&data_020eb0bc, 0);
        data_020eb0b8 = 1;
    }
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_02075e64;
    M2C_FIELD(arg0, void **, 0xC)     = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_02075dec;
    M2C_FIELD(arg0, void **, 0x18)    = arg0;
    M2C_FIELD(arg0, s32 *, 0x44)      = 0;
    M2C_FIELD(arg0, s32 *, 0x48)      = 0;
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
}
