#include "m2c.h"

M2C_UNK func_02053ea0();                            /* extern */
extern M2C_UNK data_0208cc54;
extern s32 data_0208e4fc;

M2C_UNK **func_02053a34(M2C_UNK **arg0) {
    *arg0         = &data_0208cc54;
    data_0208e4fc = 0;
    func_02053ea0(arg0);
    return arg0;
}
