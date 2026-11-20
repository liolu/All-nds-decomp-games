/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d904();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021138e4;

M2C_UNK **func_0201cf50(M2C_UNK **arg0) {
    *arg0 = &data_021138e4;
    func_0201d904();
    func_02059f70(arg0);
    return arg0;
}
