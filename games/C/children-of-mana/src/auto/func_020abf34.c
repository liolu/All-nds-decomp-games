/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020abedc();                            /* extern */
extern M2C_UNK data_02106eac;

M2C_UNK **func_020abf34(M2C_UNK **arg0) {
    *arg0 = &data_02106eac;
    func_020abedc();
    return arg0;
}
