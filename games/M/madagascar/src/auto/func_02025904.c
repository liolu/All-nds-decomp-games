/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_02025560(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bf3d8;

M2C_UNK **func_02025904(M2C_UNK **arg0) {
    *arg0 = &data_020bf3d8;
    func_02002744();
    func_02025560(arg0);
    *arg0 = &data_020bcd20;
    return arg0;
}
