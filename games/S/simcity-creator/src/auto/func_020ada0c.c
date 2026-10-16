#include "m2c.h"

M2C_UNK func_020adad0();                            /* extern */
extern M2C_UNK data_020cfedc;

M2C_UNK **func_020ada0c(M2C_UNK **arg0) {
    *arg0 = &data_020cfedc;
    func_020adad0();
    return arg0;
}
