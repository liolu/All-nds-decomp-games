/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020603c4();                            /* extern */
extern M2C_UNK data_020ad5f8;
extern M2C_UNK data_020ae4d0;

M2C_UNK **func_0207d2f4(M2C_UNK **arg0) {
    *arg0 = &data_020ae4d0;
    *arg0 = &data_020ad5f8;
    func_020603c4(arg0);
    return arg0;
}
