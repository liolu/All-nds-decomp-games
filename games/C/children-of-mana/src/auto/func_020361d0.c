/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_02013adc();                            /* extern */
extern M2C_UNK data_020fd66c;

M2C_UNK **func_020361d0(M2C_UNK **arg0) {
    *arg0 = &data_020fd66c;
    func_02013adc();
    func_0200f2c4(arg0);
    return arg0;
}
