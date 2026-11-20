/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204dcf8();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021270ec;

M2C_UNK **func_0202def0(M2C_UNK **arg0) {
    *arg0 = &data_021270ec;
    func_0204dcf8();
    func_02059f70(arg0);
    return arg0;
}
