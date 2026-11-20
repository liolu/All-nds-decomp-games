/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207b040();                            /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd07c;

M2C_UNK **func_02005320(M2C_UNK **arg0) {
    *arg0 = &data_020bd07c;
    *arg0 = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
