/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020695d4();                            /* extern */
s32 func_020697b8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020697e0(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0207489c(M2C_UNK);                     /* extern */
M2C_UNK func_02074be8();                            /* extern */
M2C_UNK func_02074d18();                            /* extern */
M2C_UNK func_020750b4(M2C_UNK *);                   /* extern */
extern s32 data_020ea078;
extern s32 data_020ea07c;
extern s32 data_020ea080;
extern M2C_UNK data_020ea160;
extern M2C_UNK func_02074c28;
extern M2C_UNK func_02074c5c;
extern M2C_UNK func_02074cdc;

void func_02074ee4(void) {
    if (data_020ea078 != 0) {
        return;
    }
    data_020ea078 = 1;
    func_02074be8();
    data_020ea07c = 0;
    func_020695d4();
    do {

    } while (func_020697b8(0xD, 1) == 0);
    func_020697e0(0xD, &func_02074cdc);
    func_02074d18();
    func_020697e0(0xD, NULL);
    func_020697e0(0xD, &func_02074c5c);
    data_020ea080 = 0;
    func_020750b4(&data_020ea160);
    func_020697e0(0x11, &func_02074c28);
    func_0207489c(0);
}
