/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_020dbaf4;
extern s32 data_020dbaf8;

void func_020654cc(s32 arg0) {
    if (data_020dbaf8 == 0) {
        data_020dbaf8 = arg0;
        data_020dbaf4 = arg0;
    } else {
        *(M2C_UNK *) data_020dbaf8 = arg0;
        data_020dbaf8              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
}
