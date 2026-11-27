#include "m2c.h"

extern M2C_UNK data_021025d4;

s32 func_0208bb08(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021025d4 + ((arg0 - 1) * 4)));
}
