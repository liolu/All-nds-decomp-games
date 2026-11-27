/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020f2e34();                            /* extern */
extern M2C_UNK data_ov011_0213768c;

M2C_UNK **func_ov011_02135d9c(M2C_UNK **arg0) {
    *arg0 = &data_ov011_0213768c;
    func_020f2e34();
    func_0200f2c4(arg0);
    return arg0;
}
