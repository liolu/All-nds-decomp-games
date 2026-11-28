/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020248f0();                            /* extern */
s32 func_02024ad4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02024afc(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020ee2e4;
extern M2C_UNK data_020ee2e8;
extern M2C_UNK func_020270b4;

void func_02027024(void) {
    if (data_020ee2e4 != 0) {
        return;
    }
    data_020ee2e4 = 1;
    func_020248f0();
    M2C_FIELD(&data_020ee2e8, s16 *, 0x32) = 0;
    M2C_FIELD(&data_020ee2e8, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020ee2e8, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_020ee2e8, s32 *, 0)    = 0;
    M2C_FIELD(&data_020ee2e8, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020ee2e8, s16 *, 0x30) = 0;
    M2C_FIELD(&data_020ee2e8, s16 *, 0x34) = 0;
    do {

    } while (func_02024ad4(6, 1) == 0);
    func_02024afc(6, &func_020270b4);
}
