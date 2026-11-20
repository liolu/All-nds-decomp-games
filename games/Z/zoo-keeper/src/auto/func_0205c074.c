/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02003734(M2C_UNK **);                  /* extern */
M2C_UNK func_0205c0c4();                            /* extern */
extern M2C_UNK data_02064390;

M2C_UNK **func_0205c074(M2C_UNK **arg0) {
    *arg0 = &data_02064390;
    func_0205c0c4();
    func_02003734(arg0);
    return arg0;
}
