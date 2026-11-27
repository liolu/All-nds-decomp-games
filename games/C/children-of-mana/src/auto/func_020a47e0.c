/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a3b1c();                            /* extern */
extern M2C_UNK data_02106210;

M2C_UNK **func_020a47e0(M2C_UNK **arg0) {
    *arg0 = &data_02106210;
    func_020a3b1c();
    return arg0;
}
