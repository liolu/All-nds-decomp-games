/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70();                            /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02124800;
extern M2C_UNK data_0212625c;

M2C_UNK **func_0204a1b0(M2C_UNK **arg0) {
    *arg0 = &data_0212625c;
    *arg0 = &data_02124800;
    *arg0 = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
