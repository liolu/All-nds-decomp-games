/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020f3990;
extern void *data_020f3994;
extern void *data_020f3998;

void func_0202dcd4(void *arg0) {
    if (data_020f3994 == NULL) {
        data_020f3994 = arg0;
        data_020f3998 = arg0;
    } else {
        M2C_FIELD(arg0, void **, 4)          = (void *) data_020f3998;
        M2C_FIELD(data_020f3998, void **, 8) = arg0;
        data_020f3998                        = arg0;
    }
    data_020f3990 += 1;
}
