/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031e6c();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021243ec;

M2C_UNK **func_0203a564(M2C_UNK **arg0) {
    *arg0 = &data_021243ec;
    func_02031e6c();
    func_02059f70(arg0);
    return arg0;
}
