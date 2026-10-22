/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020155f8(M2C_UNK **);                  /* extern */
M2C_UNK func_0201b098(M2C_UNK **, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0207816c;
extern M2C_UNK data_0210c2e0;

M2C_UNK **func_020156a8(M2C_UNK **arg0, M2C_UNK arg1) {
    func_0201b098(arg0, &data_0207816c, arg1, 0);
    *arg0 = &data_0210c2e0;
    func_020155f8(arg0);
    return arg0;
}
