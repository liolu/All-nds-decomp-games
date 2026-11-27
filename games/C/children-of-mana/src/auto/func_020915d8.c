/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f2c4(M2C_UNK **);                  /* extern */
M2C_UNK func_020150d4();                            /* extern */
extern M2C_UNK data_02102a08;

M2C_UNK **func_020915d8(M2C_UNK **arg0) {
    *arg0 = &data_02102a08;
    func_020150d4();
    func_0200f2c4(arg0);
    return arg0;
}
