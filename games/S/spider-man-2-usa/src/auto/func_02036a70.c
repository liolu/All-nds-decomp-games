/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020161e8();                            /* extern */
extern M2C_UNK data_02124208;
extern s32 data_0215d6c4;

void *func_02036a70(void *arg0) {
    func_020161e8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02124208;
    M2C_FIELD(arg0, s32 *, 0x38)   = (s32) data_0215d6c4;
    data_0215d6c4 += 1;
    return arg0;
}
