/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020362ac();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021136c8;

M2C_UNK **func_0201bbb4(M2C_UNK **arg0) {
    *arg0 = &data_021136c8;
    func_020362ac();
    func_02059f70(arg0);
    return arg0;
}
