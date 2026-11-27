#include "m2c.h"

extern M2C_UNK data_0210bac0;
extern M2C_UNK data_0210b588;

M2C_UNK *func_020d246c(u32 arg0) {
    if (arg0 < 0x17U) {
        return *((M2C_UNK *) ((s8 *) &data_0210b588 + (arg0 * 4)));
    }
    return &data_0210bac0;
}
