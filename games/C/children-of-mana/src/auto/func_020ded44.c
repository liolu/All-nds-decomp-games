/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02014dbc(M2C_UNK **);                  /* extern */
M2C_UNK func_02014d28();                            /* extern */
extern M2C_UNK data_0210da60;

M2C_UNK **func_020ded44(M2C_UNK **arg0) {
    *arg0 = &data_0210da60;
    func_02014d28();
    func_02014dbc(arg0);
    return arg0;
}
