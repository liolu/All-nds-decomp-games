#include "m2c.h"

s32 *func_02068c48(M2C_UNK *);                      /* extern */
M2C_UNK func_02089fa0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02089fe8(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_020e13c4;
extern M2C_UNK data_020e1404;

void func_02067754(M2C_UNK arg0) {
    func_02089fa0(&data_020e1404, arg0);
    func_02089fe8(&data_020e1404, (s32) *func_02068c48(&data_020e13c4) >> 0xC, 0);
}
