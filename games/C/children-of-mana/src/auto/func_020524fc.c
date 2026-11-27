/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02052234();                            /* extern */
M2C_UNK func_02052330();                            /* extern */
M2C_UNK func_0205cbe0();                            /* extern */
s32 func_0205cdc4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0205cdec(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_0211adf0;
extern s32 data_0211adf4;
extern M2C_UNK func_02052294;
extern M2C_UNK func_020522f4;

void func_020524fc(void) {
    if (data_0211adf0 != 0) {
        return;
    }
    data_0211adf0 = 1;
    func_02052234();
    func_0205cbe0();
    do {

    } while (func_0205cdc4(0xD, 1) == 0);
    func_0205cdec(0xD, &func_020522f4);
    func_02052330();
    func_0205cdec(0xD, NULL);
    func_0205cdec(0xD, &func_02052294);
    data_0211adf4 = 0;
}
