#include "m2c.h"

M2C_UNK func_020450e4(void *);                      /* extern */
M2C_UNK func_02074314(s32);                         /* extern */
extern M2C_UNK data_020e08b4;

void *func_02044cec(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e08b4;
    func_02074314(M2C_FIELD(arg0, s32 *, 4));
    func_020450e4(arg0);
    return arg0;
}
