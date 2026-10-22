/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fac0();                            /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02123eb4;

M2C_UNK **func_02032568(M2C_UNK **arg0) {
    *arg0 = &data_02123eb4;
    func_0201fac0();
    *arg0 = &data_020ffeb4;
    return arg0;
}
