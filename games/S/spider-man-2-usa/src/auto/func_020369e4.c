/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70();                            /* extern */
extern M2C_UNK data_0210c314;
extern M2C_UNK data_021240c0;
extern M2C_UNK data_02124208;
extern s32 data_0215d6c4;

M2C_UNK **func_020369e4(M2C_UNK **arg0) {
    *arg0 = &data_02124208;
    data_0215d6c4 -= 1;
    *arg0 = &data_0210c314;
    *arg0 = &data_021240c0;
    func_02059f70(arg0);
    return arg0;
}
