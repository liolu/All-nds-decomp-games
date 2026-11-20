/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201bd70(M2C_UNK **);                  /* extern */
M2C_UNK func_0201fac0();                            /* extern */
extern M2C_UNK data_02113ae4;

M2C_UNK **func_0201dd54(M2C_UNK **arg0) {
    *arg0 = &data_02113ae4;
    func_0201fac0();
    func_0201bd70(arg0);
    return arg0;
}
