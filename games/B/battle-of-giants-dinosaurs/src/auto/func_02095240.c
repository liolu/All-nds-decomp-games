#include "m2c.h"

M2C_UNK func_02083d10(void *);                      /* extern */
M2C_UNK func_02094e18(void *);                      /* extern */
M2C_UNK func_02094e80(void *);                      /* extern */
M2C_UNK func_02095074(s32);                         /* extern */
M2C_UNK func_0209516c(s32);                         /* extern */
M2C_UNK func_0209c600(void *);                      /* extern */
M2C_UNK func_0209edcc(s32);                         /* extern */
extern M2C_UNK data_020b9288;
extern M2C_UNK data_020d3cc4;

void *func_02095240(void *arg0) {
    M2C_FIELD(&data_020d3cc4, s32 *, 0x28) = 0;
    func_0209516c(arg0 + 0x1FA0);
    func_02095074(arg0 + 0x1EF4);
    M2C_FIELD(arg0, M2C_UNK **, 0x1CCC) = &data_020b9288;
    func_0209edcc(arg0 + 0x1CCC);
    func_0209c600(arg0 + 0x1528);
    func_02094e80(arg0 + 0x1528);
    func_02094e18(arg0 + 0x1374);
    func_02083d10(arg0 + 0x1314);
    return arg0;
}
