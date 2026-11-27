/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020e2fa0(M2C_UNK **);                  /* extern */
M2C_UNK func_020e2e64();                            /* extern */
extern M2C_UNK data_0210e2e0;

M2C_UNK **func_020e30f8(M2C_UNK **arg0) {
    *arg0 = &data_0210e2e0;
    func_020e2e64();
    func_020e2fa0(arg0);
    return arg0;
}
