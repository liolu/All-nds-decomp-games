/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fe60();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0210c2b0;

M2C_UNK **func_02014ac0(M2C_UNK **arg0) {
    *arg0 = &data_0210c2b0;
    func_0201fe60();
    func_02059f70(arg0);
    return arg0;
}
