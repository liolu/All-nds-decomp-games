/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b948(M2C_UNK *);                   /* extern */
M2C_UNK func_0205c898(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020d894c;
extern M2C_UNK data_020d8954;

M2C_UNK *func_02048d60(s32 arg0) {
    func_0205b948(&data_020d8954);
    func_0205c898(&data_020d894c, 0, -1, 0x60, arg0);
    return &data_020d894c;
}
