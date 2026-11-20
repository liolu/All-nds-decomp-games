/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205d2cc(M2C_UNK *);                   /* extern */
M2C_UNK func_0205e0a4(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02161684;
extern M2C_UNK data_02161714;

M2C_UNK *func_0205abf0(s32 arg0) {
    func_0205d2cc(&data_02161714);
    func_0205e0a4(&data_02161684, 0, -1, 0x60, arg0);
    return &data_02161684;
}
