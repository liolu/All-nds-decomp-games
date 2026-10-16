#include "m2c.h"

M2C_UNK func_02047c50();                            /* extern */
extern s32 data_0208e4f8;

s32 func_02051208(s32 arg0) {
    data_0208e4f8 = 0;
    func_02047c50();
    return arg0;
}
