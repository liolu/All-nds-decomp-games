/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_02103910;
extern s32 data_02126cc0;
extern s32 data_02126cc4;

void func_02095f58(s32 *arg0, s32 *arg1) {
    if (data_02103910 == 0) {
        *arg0 = 0;
        *arg1 = 0;
        return;
    }
    *arg0 = data_02126cc0;
    *arg1 = data_02126cc4;
}
