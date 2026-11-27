/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020996a0(M2C_UNK **);                  /* extern */
M2C_UNK func_0209d444();                            /* extern */
extern M2C_UNK data_02104644;

M2C_UNK **func_0209d50c(M2C_UNK **arg0) {
    *arg0 = &data_02104644;
    func_0209d444();
    func_020996a0(arg0);
    return arg0;
}
