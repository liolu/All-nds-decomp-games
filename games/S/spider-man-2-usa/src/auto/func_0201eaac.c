/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031e6c();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021156b0;

M2C_UNK **func_0201eaac(M2C_UNK **arg0) {
    *arg0 = &data_021156b0;
    func_02031e6c();
    func_02059f70(arg0);
    return arg0;
}
