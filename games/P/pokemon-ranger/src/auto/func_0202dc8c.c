/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020f3990;
extern void *data_020f3994;
extern void *data_020f3998;

void func_0202dc8c(void *arg0) {
    if (data_020f3994 != NULL) {
        M2C_FIELD(arg0, void **, 8)          = (void *) data_020f3994;
        M2C_FIELD(data_020f3994, void **, 4) = arg0;
        data_020f3994                        = arg0;
    } else {
        data_020f3994 = arg0;
        data_020f3998 = arg0;
    }
    data_020f3990 += 1;
}
