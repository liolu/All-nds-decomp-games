/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02003734(M2C_UNK **);                  /* extern */
M2C_UNK func_02014824();                            /* extern */
extern M2C_UNK data_02061a98;

M2C_UNK **func_02014b98(M2C_UNK **arg0) {
    *arg0 = &data_02061a98;
    func_02014824();
    func_02003734(arg0);
    return arg0;
}
