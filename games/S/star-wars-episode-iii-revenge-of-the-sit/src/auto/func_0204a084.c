/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467f0();                            /* extern */
s32 func_020469d4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020469fc(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020b1e28;
extern M2C_UNK data_020b1e2c;
extern M2C_UNK func_0204a114;

void func_0204a084(void) {
    if (data_020b1e28 != 0) {
        return;
    }
    data_020b1e28 = 1;
    func_020467f0();
    M2C_FIELD(&data_020b1e2c, s16 *, 0x32) = 0;
    M2C_FIELD(&data_020b1e2c, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020b1e2c, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_020b1e2c, s32 *, 0)    = 0;
    M2C_FIELD(&data_020b1e2c, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020b1e2c, s16 *, 0x30) = 0;
    M2C_FIELD(&data_020b1e2c, s16 *, 0x34) = 0;
    do {

    } while (func_020469d4(6, 1) == 0);
    func_020469fc(6, &func_0204a114);
}
