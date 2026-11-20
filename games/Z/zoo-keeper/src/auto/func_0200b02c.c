/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02003734(M2C_UNK **);                  /* extern */
M2C_UNK func_0200af9c();                            /* extern */
extern M2C_UNK data_02061a38;

M2C_UNK **func_0200b02c(M2C_UNK **arg0) {
    *arg0 = &data_02061a38;
    func_0200af9c();
    func_02003734(arg0);
    return arg0;
}
