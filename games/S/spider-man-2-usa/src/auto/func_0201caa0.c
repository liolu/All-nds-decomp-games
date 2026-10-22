/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201bd70();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02113860;

M2C_UNK **func_0201caa0(M2C_UNK **arg0) {
    *arg0 = &data_02113860;
    func_0201bd70();
    func_02059f70(arg0);
    return arg0;
}
