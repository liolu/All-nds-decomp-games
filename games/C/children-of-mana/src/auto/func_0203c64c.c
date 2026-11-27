/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048bdc();                            /* extern */
extern M2C_UNK data_020fdca0;

M2C_UNK **func_0203c64c(M2C_UNK **arg0) {
    *arg0 = &data_020fdca0;
    func_02048bdc();
    return arg0;
}
