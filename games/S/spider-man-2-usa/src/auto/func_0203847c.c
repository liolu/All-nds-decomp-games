/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204dcf8();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02124324;
extern M2C_UNK data_02127014;

M2C_UNK **func_0203847c(M2C_UNK **arg0) {
    *arg0 = &data_02124324;
    *arg0 = &data_02127014;
    func_0204dcf8(arg0);
    func_02059f70(arg0);
    return arg0;
}
