/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02123edc;

void *func_02032da4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02123edc;
    func_02059f70(M2C_FIELD(arg0, void **, 0x18));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
