/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201f538(M2C_UNK **);                  /* extern */
M2C_UNK func_0206714c();                            /* extern */
extern M2C_UNK data_020a2e3c;

M2C_UNK **func_020670fc(M2C_UNK **arg0) {
    *arg0 = &data_020a2e3c;
    func_0206714c();
    func_0201f538(arg0);
    return arg0;
}
