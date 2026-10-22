/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02053a2c(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02126440;

void *func_0204c4b4(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02126440;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) *arg1;
    func_02053a2c(arg0 + 8);
    return arg0;
}
