/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020647d4(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_02123b78;
extern M2C_UNK data_02123b7c;
extern M2C_UNK func_02074768;
extern M2C_UNK func_020747e0;

void func_02074db8(void *arg0) {
    if (data_02123b78 == 0) {
        func_020647d4(&data_02123b7c, 0);
        data_02123b78 = 1;
    }
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020747e0;
    M2C_FIELD(arg0, void **, 0xC)     = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_02074768;
    M2C_FIELD(arg0, void **, 0x18)    = arg0;
    M2C_FIELD(arg0, s32 *, 0x44)      = 0;
    M2C_FIELD(arg0, s32 *, 0x48)      = 0;
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
}
