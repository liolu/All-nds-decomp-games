/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fac0();                            /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02106aec;
extern s32 data_02157e10;

M2C_UNK **func_02005de0(M2C_UNK **arg0) {
    *arg0 = &data_02106aec;
    func_0201fac0();
    data_02157e10 = 0;
    *arg0         = &data_020ffeb4;
    return arg0;
}
