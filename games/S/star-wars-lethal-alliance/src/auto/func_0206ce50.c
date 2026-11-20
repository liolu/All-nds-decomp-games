/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020695d4();                            /* extern */
s32 func_020697b8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020697e0(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020e82f0;
extern M2C_UNK data_020e82f4;
extern M2C_UNK func_0206cee0;

void func_0206ce50(void) {
    if (data_020e82f0 != 0) {
        return;
    }
    data_020e82f0 = 1;
    func_020695d4();
    M2C_FIELD(&data_020e82f4, s16 *, 0x32) = 0;
    M2C_FIELD(&data_020e82f4, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020e82f4, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_020e82f4, s32 *, 0)    = 0;
    M2C_FIELD(&data_020e82f4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020e82f4, s16 *, 0x30) = 0;
    M2C_FIELD(&data_020e82f4, s16 *, 0x34) = 0;
    do {

    } while (func_020697b8(6, 1) == 0);
    func_020697e0(6, &func_0206cee0);
}
