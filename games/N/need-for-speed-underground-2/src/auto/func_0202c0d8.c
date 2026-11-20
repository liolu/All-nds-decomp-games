/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201f538(M2C_UNK **);                  /* extern */
M2C_UNK func_02031e80();                            /* extern */
extern M2C_UNK data_0209a4c8;

M2C_UNK **func_0202c0d8(M2C_UNK **arg0) {
    *arg0 = &data_0209a4c8;
    func_02031e80();
    func_0201f538(arg0);
    return arg0;
}
