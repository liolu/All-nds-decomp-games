/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031e6c();                            /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02124800;
extern M2C_UNK data_02126374;
extern M2C_UNK data_02126418;

void *func_0204bf3c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_02126374;
    M2C_FIELD(arg0, M2C_UNK **, 0x5A8) = &data_02126418;
    M2C_FIELD(arg0, M2C_UNK **, 0x5A8) = &data_02124800;
    M2C_FIELD(arg0, M2C_UNK **, 0x5A8) = &data_020ffeb4;
    func_02031e6c(arg0);
    func_02059f70(arg0);
    return arg0;
}
