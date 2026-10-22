/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d60c();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02107c48;

M2C_UNK **func_0200b018(M2C_UNK **arg0) {
    *arg0 = &data_02107c48;
    func_0200d60c();
    func_02059f70(arg0);
    return arg0;
}
