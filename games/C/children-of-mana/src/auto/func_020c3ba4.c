/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_02013adc();                            /* extern */
extern M2C_UNK data_02109894;

M2C_UNK **func_020c3ba4(M2C_UNK **arg0) {
    *arg0 = &data_02109894;
    func_02013adc();
    func_0200f2c4(arg0);
    return arg0;
}
