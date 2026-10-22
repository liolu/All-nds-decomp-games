/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02006a60();                                /* extern */
s32 func_02006ec8(void *);                          /* extern */
M2C_UNK func_02007804(void *);                      /* extern */
extern M2C_UNK data_0215b3d4;

void func_020087f8(void *arg0) {
    if (func_02006a60() != 0) {
        return;
    }
    if (func_02006ec8(arg0) == 0) {
        return;
    }
    if (M2C_FIELD(&data_0215b3d4, s32 *, 0x64) == 0x14) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B4), s32 *, 0x20) != 0) {
        return;
    }
    func_02007804(arg0);
}
