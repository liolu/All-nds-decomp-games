/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065b80();                            /* extern */
s32 func_02065d64(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02065d8c(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020dd724;
extern M2C_UNK data_020dd728;
extern M2C_UNK func_020683c8;

void func_02068338(void) {
    if (data_020dd724 != 0) {
        return;
    }
    data_020dd724 = 1;
    func_02065b80();
    M2C_FIELD(&data_020dd728, s16 *, 0x32) = 0;
    M2C_FIELD(&data_020dd728, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020dd728, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_020dd728, s32 *, 0)    = 0;
    M2C_FIELD(&data_020dd728, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020dd728, s16 *, 0x30) = 0;
    M2C_FIELD(&data_020dd728, s16 *, 0x34) = 0;
    do {

    } while (func_02065d64(6, 1) == 0);
    func_02065d8c(6, &func_020683c8);
}
