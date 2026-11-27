/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02013adc();                            /* extern */
extern M2C_UNK data_020fd66c;

M2C_UNK **func_020361fc(M2C_UNK **arg0) {
    *arg0 = &data_020fd66c;
    func_02013adc();
    return arg0;
}
