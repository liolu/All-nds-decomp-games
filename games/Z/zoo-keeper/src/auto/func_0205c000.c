/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02003734(M2C_UNK **);                  /* extern */
M2C_UNK func_0205c050();                            /* extern */
extern M2C_UNK data_02064380;

M2C_UNK **func_0205c000(M2C_UNK **arg0) {
    *arg0 = &data_02064380;
    func_0205c050();
    func_02003734(arg0);
    return arg0;
}
