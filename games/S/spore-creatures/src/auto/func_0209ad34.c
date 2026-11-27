#include "m2c.h"

M2C_UNK func_02092d40(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020d817c;
extern u8 data_020e8f50;
extern M2C_UNK data_020e8f54;

M2C_UNK *func_0209ad34(M2C_UNK arg0) {
    func_02092d40(*((M2C_UNK *) ((s8 *) &data_020d817c + (data_020e8f50 * 4))), arg0, &data_020e8f54, 0x400);
    return &data_020e8f54;
}
