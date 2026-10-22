/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019920(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_0215b4ac;
extern M2C_UNK data_0215b4b0;

M2C_UNK *func_020199e4(void) {
    if (!(data_0215b4ac & 1)) {
        func_02019920(&data_0215b4b0, 3);
        data_0215b4ac |= 1;
    }
    return &data_0215b4b0;
}
