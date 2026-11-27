/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02090e10();                            /* extern */
extern M2C_UNK data_021029c8;

M2C_UNK **func_02090ebc(M2C_UNK **arg0) {
    *arg0 = &data_021029c8;
    func_02090e10();
    return arg0;
}
