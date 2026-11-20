/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065b80();                            /* extern */
s32 func_02065d64(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02065d8c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02072c38();                            /* extern */
M2C_UNK func_02072d34();                            /* extern */
extern s32 data_020ded9c;
extern s32 data_020deda0;
extern M2C_UNK func_02072c98;
extern M2C_UNK func_02072cf8;

void func_02072ef0(void) {
    if (data_020ded9c != 0) {
        return;
    }
    data_020ded9c = 1;
    func_02072c38();
    func_02065b80();
    do {

    } while (func_02065d64(0xD, 1) == 0);
    func_02065d8c(0xD, &func_02072cf8);
    func_02072d34();
    func_02065d8c(0xD, NULL);
    func_02065d8c(0xD, &func_02072c98);
    data_020deda0 = 0;
}
