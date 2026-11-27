/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0212e944;
extern M2C_UNK (*data_0212e950)();

void func_020e4cac(s32 arg0) {
    data_0212e944 = 1;
    if (data_0212e950 == NULL) {
        return;
    }
    data_0212e950(arg0);
}
