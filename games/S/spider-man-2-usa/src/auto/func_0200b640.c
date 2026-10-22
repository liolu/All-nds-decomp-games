/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02045048();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02108f8c;

M2C_UNK **func_0200b640(M2C_UNK **arg0) {
    *arg0 = &data_02108f8c;
    func_02045048();
    func_02059f70(arg0);
    return arg0;
}
