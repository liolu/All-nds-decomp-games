/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e90(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0203bce0();                            /* extern */
extern M2C_UNK data_02089854;
extern M2C_UNK data_020c3b30;

void *func_0203bda8(void *arg0) {
    func_0203bce0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c3b30;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    func_02000e90(arg0 + 4, &data_02089854);
    return arg0;
}
