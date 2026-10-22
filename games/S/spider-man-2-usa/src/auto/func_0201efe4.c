/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f64(s32);                         /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02115754;

void *func_0201efe4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02115754;
    func_02059f64(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
