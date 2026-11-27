/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e40c(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern s32 data_0212e924;
extern s32 data_0212e928;
extern s32 data_0212e92c;
extern M2C_UNK func_020e4364;

void func_020e43e4(void) {
    if (data_0212e928 != 0) {
        func_0200e40c(data_0212e928, 0x24, 8, &func_020e4364);
        data_0212e928 = 0;
    }
    data_0212e924 = 0;
    data_0212e92c = 0;
}
