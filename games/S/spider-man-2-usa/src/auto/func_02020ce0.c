/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201b098(M2C_UNK **, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02020a60(M2C_UNK **);                  /* extern */
M2C_UNK func_02020c3c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02077fdc;
extern M2C_UNK data_02115890;

M2C_UNK **func_02020ce0(M2C_UNK **arg0, s32 arg1, M2C_UNK arg2) {
    func_0201b098(arg0, &data_02077fdc, arg2, 0);
    *arg0 = &data_02115890;
    if (arg1 != 0) {
        func_02020c3c(arg0);
        func_02020a60(arg0);
    }
    return arg0;
}
