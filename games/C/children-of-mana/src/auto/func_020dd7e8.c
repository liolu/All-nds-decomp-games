/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                            /* extern */
extern M2C_UNK data_020fab68;
extern M2C_UNK data_0210d1ac;
extern s32 data_0212e824;

M2C_UNK **func_020dd7e8(M2C_UNK **arg0) {
    *arg0         = &data_0210d1ac;
    data_0212e824 = 0;
    *arg0         = &data_020fab68;
    func_0200f2c4(arg0);
    return arg0;
}
