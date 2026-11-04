/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02003734(M2C_UNK **);                  /* extern */
M2C_UNK func_0200ada8();                            /* extern */
extern M2C_UNK data_02061a18;

M2C_UNK **func_0200af1c(M2C_UNK **arg0) {
    *arg0 = &data_02061a18;
    func_0200ada8();
    func_02003734(arg0);
    return arg0;
}
