/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02091ad8(M2C_UNK **);                  /* extern */
M2C_UNK func_02091a54();                            /* extern */
extern M2C_UNK data_02102a9c;

M2C_UNK **func_02091fb8(M2C_UNK **arg0) {
    *arg0 = &data_02102a9c;
    func_02091a54();
    func_02091ad8(arg0);
    return arg0;
}
