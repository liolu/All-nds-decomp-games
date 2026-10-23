#include "m2c.h"

M2C_UNK func_ov003_02149090();                            /* extern */
extern M2C_UNK data_ov003_02153878;

void *func_ov003_02149264(void *arg0) {
    func_ov003_02149090();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_02153878;
    M2C_FIELD(arg0, s32 *, 0x44)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    return arg0;
}
