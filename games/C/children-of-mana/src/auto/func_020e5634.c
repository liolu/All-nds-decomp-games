/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0212e964;
extern s32 data_0212e988;

void func_020e5634(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 8) {
        data_0212e988 = 1;
        data_0212e964 = 1;
    }
}
