/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_021617a8;
extern s32 data_021617ac;

void func_0205b438(s32 arg0) {
    if (data_021617ac == 0) {
        data_021617ac = arg0;
        data_021617a8 = arg0;
    } else {
        *(M2C_UNK *) data_021617ac = arg0;
        data_021617ac              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
}
