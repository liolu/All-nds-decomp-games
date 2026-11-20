/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020f3990;
extern void *data_020f3994;

void func_0202ddb8(void *arg0, void *arg1) {
    if (data_020f3994 == NULL) {
        return;
    }
    if (data_020f3994 == arg0) {
        data_020f3994 = arg1;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 8) = arg1;
        M2C_FIELD(arg1, void **, 4)                        = (void *) M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg1, void **, 8) = arg0;
    M2C_FIELD(arg0, void **, 4) = arg1;
    data_020f3990 += 1;
}
