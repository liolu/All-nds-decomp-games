/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02034600(void *, M2C_UNK *, M2C_UNK);  /* extern */
s32 func_02079258(s32, s32);                        /* extern */
extern M2C_UNK data_02089e4c;
extern M2C_UNK data_020c49f8;

void *func_02043d24(void *arg0, M2C_UNK arg1, void *arg2) {
    func_02034600(arg0, &data_02089e4c, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c49f8;
    M2C_FIELD(arg0, s32 *, 0x1C4)  = func_02079258(M2C_FIELD(arg2, s32 *, 0x14) << 8, M2C_FIELD(arg2, s32 *, 0x10));
    return arg0;
}
