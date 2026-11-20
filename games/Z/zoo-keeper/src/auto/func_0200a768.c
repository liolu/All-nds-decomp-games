/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02003734(M2C_UNK **);                  /* extern */
M2C_UNK func_0200a594();                            /* extern */
extern M2C_UNK data_020619dc;

M2C_UNK **func_0200a768(M2C_UNK **arg0) {
    *arg0 = &data_020619dc;
    func_0200a594();
    func_02003734(arg0);
    return arg0;
}
