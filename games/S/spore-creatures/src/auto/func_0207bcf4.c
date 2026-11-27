#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
extern M2C_UNK data_020dfadc;

void *func_0207bcf4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfadc;
    func_020934a8(M2C_FIELD(arg0, void **, 0x24));
    M2C_FIELD(arg0, void **, 0x24) = NULL;
    func_020934a8(arg0);
    return arg0;
}
