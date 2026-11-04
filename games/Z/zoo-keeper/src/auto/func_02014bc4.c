/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02014824();                            /* extern */
extern M2C_UNK data_02061a98;

M2C_UNK **func_02014bc4(M2C_UNK **arg0) {
    *arg0 = &data_02061a98;
    func_02014824();
    return arg0;
}
