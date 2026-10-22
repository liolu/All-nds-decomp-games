/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0210c314;
extern M2C_UNK data_021240c0;
extern M2C_UNK data_02124208;
extern s32 data_0215d6c4;

void func_02036a34(M2C_UNK **arg0) {
    *arg0 = &data_02124208;
    data_0215d6c4 -= 1;
    *arg0 = &data_0210c314;
    *arg0 = &data_021240c0;
}
