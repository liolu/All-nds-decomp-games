/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bce18;

M2C_UNK **func_020029c8(M2C_UNK **arg0) {
    *arg0 = &data_020bce18;
    func_02002744();
    *arg0 = &data_020bcd20;
    return arg0;
}
