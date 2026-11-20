#include "m2c.h"

M2C_UNK func_0203491c(void *);                      /* extern */
M2C_UNK func_02034934(s32);                         /* extern */
extern M2C_UNK data_020ccb0c;

void *func_0205fbac(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccb0c;
    func_02034934(M2C_FIELD(arg0, s32 *, 4));
    func_0203491c(arg0);
    return arg0;
}
