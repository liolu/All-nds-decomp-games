/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028d1c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02065da8();                            /* extern */
M2C_UNK func_02068de0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02115440;
extern M2C_UNK data_0211545c;
extern M2C_UNK data_02115478;
extern M2C_UNK func_02028ba4;

void func_02028cb0(void) {
    func_02065da8();
    func_02028d1c(&data_0211545c, 0, 0x80, 0);
    func_02028d1c(&data_02115440, 0, 0x80, 1);
    func_02028d1c(&data_02115478, 0, 0x80, 2);
    func_02068de0(&func_02028ba4);
}
