/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fac0();                            /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02124800;
extern M2C_UNK data_02124908;

M2C_UNK **func_02049d70(M2C_UNK **arg0) {
    *arg0 = &data_02124908;
    func_0201fac0();
    *arg0 = &data_02124800;
    *arg0 = &data_020ffeb4;
    return arg0;
}
